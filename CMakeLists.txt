cmake_minimum_required(VERSION 3.10)

project(Tutorial VERSION 1.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

option(USE_MYMATH "Use tutorial provided math implementation" ON)
if(USE_MYMATH)
  add_subdirectory(Math)
  list(APPEND EXTRA_LIBS Math)
  list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/Math")
endif()
configure_file(TutorialConfig.h.in TutorialConfig.h)

add_executable(Tutorial Tutorial.cxx)
target_link_libraries(Tutorial PUBLIC ${EXTRA_LIBS})

target_include_directories(
  Tutorial PUBLIC
  "${PROJECT_BINARY_DIR}"
  "${EXTRA_INCLUDES}"
)
