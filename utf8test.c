#include <glib.h>

#ifndef G_OS_WIN32
#include <locale.h>
#endif

int main(void)
{
#ifndef G_OS_WIN32
    setlocale(LC_ALL, "");
#endif

    if (!g_utf8_validate("тест\n", -1, NULL))
        return 1;

    g_print("тест\n");
    return 0;
}
