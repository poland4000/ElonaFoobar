#include <iostream>
#include <stdexcept>
#include <SDL.h>
#include "elona/defines.hpp"
#include "elona/init.hpp"
#include "elona/log.hpp"
#include "version.hpp"
#if defined(ELONA_OS_WINDOWS)
#include <windows.h> // OutputDebugStringA
#endif

namespace elona
{

void report_error(const char* what)
{
#if defined(ELONA_OS_WINDOWS)
    OutputDebugStringA(what);
    MessageBoxA(NULL, what, "Error", MB_OK | MB_ICONSTOP);
#elif defined(ELONA_OS_ANDROID)
    LOGD("Error: %s", what);
#endif
    ELONA_LOG("Error: " << what);
    std::cerr << "Error: " << what << std::endl;
}
} // namespace elona



int main(int argc, char** argv)
{
    using namespace elona;
    (void)argc, (void)argv;

    log::initialize();

    ELONA_LOG(latest_version.long_string());

#if DEBUG
    return run();
#else
    try
    {
        return run();
    }
    catch (std::exception& e)
    {
        report_error(e.what());
    }
#endif

    return 0;
}
