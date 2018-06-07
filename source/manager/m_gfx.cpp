#include "common.h"
#include "core/label.h"
#include "core/imagebutton.h"
#include "manager/m_gfx.h"


void draw_manager_main_menu(void)
{
    draw_base_interface();
    C2D_SceneBegin(bottom);
    DrawSprite(Common_ss, NLTK_ICON, 126, 10); //NLTK's Icon
    C2D_SceneBegin(top);
    draw_centered_text(0, 400, 80, 0, 1.1, 1.1, COLOR_GREY, "Manager Main Menu!");
    draw_cursor();
    C3D_FrameEnd(0);
}