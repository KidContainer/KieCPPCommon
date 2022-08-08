#pragma once

#ifdef _WIN32
  #define kie_common_EXPORT __declspec(dllexport)
#else
  #define kie_common_EXPORT
#endif

kie_common_EXPORT void kie_common();
