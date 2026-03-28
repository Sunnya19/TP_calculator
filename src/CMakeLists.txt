set(SOURCES
    main.cpp
    calc.cpp
)

add_executable(calc ${SOURCES})

target_include_directories(calc PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)