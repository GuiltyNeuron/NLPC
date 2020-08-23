# set source class path
set (SRC_FILES_PATH "../../src")

set(Main ${SRC_FILES_PATH}/main.cpp
         ${SRC_FILES_PATH}/Tokenization.cpp ${SRC_FILES_PATH}/Tokenization.h
         ${SRC_FILES_PATH}/Preprocess.cpp ${SRC_FILES_PATH}/Preprocess.h
         ${SRC_FILES_PATH}/SpellCheck.cpp ${SRC_FILES_PATH}/SpellCheck.h
         ${SRC_FILES_PATH}/Data.cpp ${SRC_FILES_PATH}/Data.h)


add_executable(NlpCpp ${Main})

#include_directories (NlpCpp ${OpenCV_INCLUDE_DIRS})
#target_link_libraries (NlpCpp ${LIBRARIES})
