# List all source files
set(SOURCES
    main.cpp
)

# Add the executable target
add_executable(${PROJECT_NAME} ${SOURCES})

# Include directories (if you have headers in src/)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
