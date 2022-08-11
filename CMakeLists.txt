cmake_minimum_required(VERSION 3.10)

# set the project name
project(c_gcc_gh_actions)

# add the executable
add_executable(c_gcc_gh_actions main.c main.h)

add_executable(c_gcc_gh_actions_test test_main.c answer.c answer.h)

# enable testing functionality
enable_testing()

# define tests
add_test(
  NAME c_gcc_gh_actions_test
  COMMAND $<TARGET_FILE:c_gcc_gh_actions_test>
  )