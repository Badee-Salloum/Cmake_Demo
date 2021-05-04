# define a new library with the given source files
add_library(add-lib add.cpp add.h)
# make header files automatically available to any target that links to add-lib
target_include_directories(add-lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
