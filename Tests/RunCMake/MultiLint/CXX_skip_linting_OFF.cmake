enable_language(CXX)
set(CMAKE_CXX_INCLUDE_WHAT_YOU_USE "$<1:${PSEUDO_IWYU}>" -some -args)
set(CMAKE_CXX_CLANG_TIDY "$<1:${PSEUDO_TIDY}>" -bad)
set(CMAKE_CXX_CPPLINT "$<1:${PSEUDO_CPPLINT}>" --error)
set(CMAKE_CXX_CPPCHECK "$<1:${PSEUDO_CPPCHECK}>" -error)
add_executable(main main.cxx)
set_source_files_properties(main.cxx PROPERTIES SKIP_LINTING OFF)
