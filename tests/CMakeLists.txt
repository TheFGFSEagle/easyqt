add_executable(test-basic basic.cxx)
target_link_libraries(test-basic easyqt::easyqt)
add_test(NAME Basic COMMAND test-basic)
