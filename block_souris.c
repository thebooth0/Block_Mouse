#include <stdio.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>

int main() {
    Display *display;
    Window root;

    display = XOpenDisplay(NULL);

    if (!display) {
        fprintf(stderr, "Impossible d'ouvrir l'affichage\n");
        return 1;
    }

    root = DefaultRootWindow(display);

    // Capturer la souris
    XGrabPointer(display, root, False, ButtonPressMask, GrabModeAsync, GrabModeAsync, None, None, CurrentTime);

    printf("La souris est actuellement bloquée. Quittez le programme pour pouvoir l'utilisé de nouveau\n");

    XEvent ev;
/*    while (1) {      Ca marche Pô
        XNextEvent(display, &ev);

        if (ev.type == KeyPress) {
            if (XLookupKeysym(&ev.xkey, 0) == XK_Escape) {
                break; // Quitte le programme si la touche "Esc" est pressée
            }
        }
    }*/ 

    // Libérer la souris
    XUngrabPointer(display, CurrentTime);

    XCloseDisplay(display);
    return 0;
}
