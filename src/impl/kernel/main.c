#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_BLACK, PRINT_COLOR_WHITE);
    print_str("***       **    **      **  ********  ********\n");
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str("****      **    **      **  ********     **   \n");
    print_set_color(PRINT_COLOR_BLACK, PRINT_COLOR_WHITE);
    print_str("** **     **    **      **  **           **   \n");
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str("**  **    **    **      **  ********     **   \n");
    print_set_color(PRINT_COLOR_BLACK, PRINT_COLOR_WHITE);
    print_str("**   **   **    **      **  ********     **   \n");
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str("**    **  **    **      **        **     **   \n");
    print_set_color(PRINT_COLOR_BLACK, PRINT_COLOR_WHITE);
    print_str("**     ** **    **********  ********     **   \n");
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str("**       ***    **********  ********     **   \n");
    
    print_str("\n\n");

    print_set_color(PRINT_COLOR_BLACK, PRINT_COLOR_WHITE);
    print_str("BY: SYED MOHAMMAD MAZIN || BSCS 9B || CMS: 306913");
    
}