set(LIB_SOURCES money.c)
set(MAIN_SOURCES main.c)
set(HEADERS ${CONFIG_HEADER} money.h)

#add_executable(money STATIC ${LIB_SOURCES} ${HEADERS})
add_library(money STATIC ${LIB_SOURCES} ${HEADERS})
add_executable(UnitTesting ${HEADERS} ${MAIN_SOURCES})
target_link_libraries(UnitTesting money)