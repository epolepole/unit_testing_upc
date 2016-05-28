
cmake_minimum_required (VERSION 2.6)

set(CMAKE_BUILD_TYPE Debug)



set(CMAKE_SHARED_LIBRARY_LINK_C_FLAGS "")
set(CMAKE_SHARED_LIBRARY_LINK_CXX_FLAGS "")

set(CMAKE_C_COMPILER upcc)

set(CMAKE_C_FLAGS_DEBUG "-T 8 -g")
set(CMAKE_C_FLAGS_RELEASE "-T 8")


project (UnitTesting)




set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
add_subdirectory (src)
add_subdirectory (tests)