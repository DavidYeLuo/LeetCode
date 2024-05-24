project(medium)

add_library(medium STATIC)
target_include_directories(medium PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/)
target_sources(
  medium
  PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src/LRUCache.cpp
          ${CMAKE_CURRENT_SOURCE_DIR}/src/SumRangeQueryImmutableTwoD.cpp
          ${CMAKE_CURRENT_SOURCE_DIR}/src/ProductOfArrayExceptSelf.cpp
          ${CMAKE_CURRENT_SOURCE_DIR}/src/SubarraySumEqualsK.cpp
          ${CMAKE_CURRENT_SOURCE_DIR}/src/TopKFrequentElements.cpp
          ${CMAKE_CURRENT_SOURCE_DIR}/src/GroupAnagrams.cpp)
