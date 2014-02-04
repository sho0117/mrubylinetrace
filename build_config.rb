MRuby::Build.new do |conf|
  # load specific toolchain settings
  toolchain :gcc

  # Use mrbgems
  # conf.gem 'examples/mrbgems/ruby_extension_example'
  # conf.gem 'examples/mrbgems/c_extension_example' do |g|
  #   g.cc.flags << '-g' # append cflags in this gem
  # end
  # conf.gem 'examples/mrbgems/c_and_ruby_extension_example'
  # conf.gem :github => 'masuidrive/mrbgems-example', :branch => 'master'
  # conf.gem :git => 'git@github.com:masuidrive/mrbgems-example.git', :branch => 'master', :options => '-v'

  # include the default GEMs
  conf.gembox 'default'

  # C compiler settings
  # conf.cc do |cc|
  #   cc.command = ENV['CC'] || 'gcc'
  #   cc.flags = [ENV['CFLAGS'] || %w()]
  #   cc.include_paths = ["#{root}/include"]
  #   cc.defines = %w(DISABLE_GEMS)
  #   cc.option_include_path = '-I%s'
  #   cc.option_define = '-D%s'
  #   cc.compile_options = "%{flags} -MMD -o %{outfile} -c %{infile}"
  # end

  # mrbc settings
  # conf.mrbc do |mrbc|
  #   mrbc.compile_options = "-g -B%{funcname} -o-" # The -g option is required for line numbers
  # end

  # Linker settings
  # conf.linker do |linker|
  #   linker.command = ENV['LD'] || 'gcc'
  #   linker.flags = [ENV['LDFLAGS'] || []]
  #   linker.flags_before_libraries = []
  #   linker.libraries = %w()
  #   linker.flags_after_libraries = []
  #   linker.library_paths = []
  #   linker.option_library = '-l%s'
  #   linker.option_library_path = '-L%s'
  #   linker.link_options = "%{flags} -o %{outfile} %{objs} %{libs}"
  # end

  # Archiver settings
  # conf.archiver do |archiver|
  #   archiver.command = ENV['AR'] || 'ar'
  #   archiver.archive_options = 'rs %{outfile} %{objs}'
  # end

  # Parser generator settings
  # conf.yacc do |yacc|
  #   yacc.command = ENV['YACC'] || 'bison'
  #   yacc.compile_options = '-o %{outfile} %{infile}'
  # end

  # gperf settings
  # conf.gperf do |gperf|
  #   gperf.command = 'gperf'
  #   gperf.compile_options = '-L ANSI-C -C -p -j1 -i 1 -g -o -t -N mrb_reserved_word -k"1,3,$" %{infile} > %{outfile}'
  # end

  # file extensions
  # conf.exts do |exts|
  #   exts.object = '.o'
  #   exts.executable = '' # '.exe' if Windows
  #   exts.library = '.a'
  # end

  # file separetor
  # conf.file_separator = '/'
end

# Define cross build settings
# MRuby::CrossBuild.new('32bit') do |conf|
#   toolchain :gcc
#
#   conf.cc.flags << "-m32"
#   conf.linker.flags << "-m32"
#
#   conf.build_mrbtest_lib_only
#
#   conf.gem 'examples/mrbgems/c_and_ruby_extension_example'
#
#   conf.test_runner.command = 'env'
#
# end



# Cross Compiling configuration for Digilent chipKIT Max32
# http://www.digilentinc.com/Products/Detail.cfm?Prod=CHIPKIT-MAX32
#
# Requires MPIDE (https://github.com/chipKIT32/chipKIT32-MAX)
#
# This configuration is based on @kyab's version
# http://d.hatena.ne.jp/kyab/20130201
MRuby::CrossBuild.new("chipKitMax32") do |conf|
  toolchain :gcc

  # Mac OS X
  # MPIDE_PATH = '/Applications/Mpide.app/Contents/Resources/Java'
  # GNU Linux
  MPIDE_PATH = '/Applications/Mpide.app/Contents/Resources/Java'

  PIC32_PATH = "#{MPIDE_PATH}/hardware/pic32"  

  conf.cc do |cc|
    cc.command = "#{PIC32_PATH}/compiler/pic32-tools/bin/pic32-gcc"
    cc.include_paths << ["#{PIC32_PATH}/cores/pic32",
                        "#{PIC32_PATH}/variants/Max32",
                        "#{PIC32_PATH}/libraries"]
    cc.flags = %w(-O2 -mno-smart-io -w -ffunction-sections -fdata-sections -g -mdebugger -Wcast-align 
                -fno-short-double -mprocessor=32MX795F512L -DF_CPU=80000000L -DARDUINO=23 -D_BOARD_MEGA_ 
                -DMPIDEVER=0x01000202 -DMPIDE=23)
    cc.compile_options = "%{flags} -o %{outfile} -c %{infile}"

    #configuration for low memory environment
    cc.defines << %w(MRB_HEAP_PAGE_SIZE=64)
    cc.defines << %w(MRB_USE_IV_SEGLIST)
    cc.defines << %w(KHASH_DEFAULT_SIZE=8)
    cc.defines << %w(MRB_STR_BUF_MIN_SIZE=20)
    cc.defines << %w(MRB_GC_STRESS)
    #cc.defines << %w(DISABLE_STDIO) #if you dont need stdio.
    #cc.defines << %w(POOL_PAGE_SIZE=1000) #effective only for use with mruby-eval
  end

  conf.cxx do |cxx|
    cxx.command = conf.cc.command.dup
    cxx.include_paths = conf.cc.include_paths.dup
    cxx.flags = conf.cc.flags.dup
    cxx.defines = conf.cc.defines.dup
    cxx.compile_options = conf.cc.compile_options.dup
  end

  conf.archiver do |archiver|
    archiver.command = "#{PIC32_PATH}/compiler/pic32-tools/bin/pic32-ar"
    archiver.archive_options = 'rcs %{outfile} %{objs}'
  end

  #no executables
  conf.bins = []

  #do not build test executable 
  conf.build_mrbtest_lib_only

  #gems from core
  conf.gem :core => "mruby-print" 
  conf.gem :core => "mruby-math"
  conf.gem :core => "mruby-enum-ext"

  #light-weight regular expression
  conf.gem :github => "masamitsu-murase/mruby-hs-regexp", :branch => "master" 

  #Arduino API
  #conf.gem :github =>"kyab/mruby-arduino", :branch => "master"

end

