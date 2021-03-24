#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
void THIS_IS_GNU();
#endif
#ifdef __MINGW32__
void THIS_IS_MINGW();
#endif
#if defined(__MSYS__)
void THIS_IS_MSYS();
#elif defined(__CYGWIN__)
void THIS_IS_CYGWIN();
#endif
