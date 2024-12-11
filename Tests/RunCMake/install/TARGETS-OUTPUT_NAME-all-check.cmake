if(WIN32)
  set(test123 [[bin/test1out\.exe;bin/test2deb\.exe;bin/test3exc\.exe]])
  set(libtest45 [[bin/libtest4\.dll;bin/libtest4\.dll\.a;bin/libtest5ar\.a]])
  set(test45 [[bin/test4\.dll;bin/test4\.(lib|l);bin/test5ar\.(lib|l)]])

  check_installed("^bin;(${libtest45};${test123})|(${test123};${test45})\$")
elseif(MSYS)
  check_installed([[^bin;bin/libtest4\.dll\.a;bin/libtest5ar\.a;bin/msys-test4\.dll;bin/test1out\.exe;bin/test2deb\.exe;bin/test3exc\.exe$]])
elseif(CYGWIN)
  check_installed([[^bin;bin/cygtest4\.dll;bin/libtest4\.dll\.a;bin/libtest5ar\.a;bin/test1out\.exe;bin/test2deb\.exe;bin/test3exc\.exe$]])
elseif(APPLE)
  check_installed([[^bin;bin/libtest4lib\.dylib;bin/libtest5ar\.a;bin/test1out;bin/test2deb;bin/test3exc$]])
else()
  check_installed([[^bin;bin/libtest4lib\.so;bin/libtest5ar\.a;bin/test1out;bin/test2deb;bin/test3exc$]])
endif()