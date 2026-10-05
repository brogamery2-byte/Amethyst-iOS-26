// SDL3 Keycode Compatibility Layer
// Maps SDL3 scancode values to the GLFW key constants already used in the launcher.
#pragma once

#include "glfw_keycodes.h"

// SDL3 event types (approximate subset)
#define SDL_EVENT_KEY_DOWN  4
#define SDL_EVENT_KEY_UP    5
#define SDL_EVENT_TEXT_INPUT 24

typedef enum {
    SDL_SCANCODE_UNKNOWN = 0,
    SDL_SCANCODE_A = 4,
    SDL_SCANCODE_B = 5,
    SDL_SCANCODE_C = 6,
    SDL_SCANCODE_D = 7,
    SDL_SCANCODE_E = 8,
    SDL_SCANCODE_F = 9,
    SDL_SCANCODE_G = 10,
    SDL_SCANCODE_H = 11,
    SDL_SCANCODE_I = 12,
    SDL_SCANCODE_J = 13,
    SDL_SCANCODE_K = 14,
    SDL_SCANCODE_L = 15,
    SDL_SCANCODE_M = 16,
    SDL_SCANCODE_N = 17,
    SDL_SCANCODE_O = 18,
    SDL_SCANCODE_P = 19,
    SDL_SCANCODE_Q = 20,
    SDL_SCANCODE_R = 21,
    SDL_SCANCODE_S = 22,
    SDL_SCANCODE_T = 23,
    SDL_SCANCODE_U = 24,
    SDL_SCANCODE_V = 25,
    SDL_SCANCODE_W = 26,
    SDL_SCANCODE_X = 27,
    SDL_SCANCODE_Y = 28,
    SDL_SCANCODE_Z = 29,
    SDL_SCANCODE_1 = 30,
    SDL_SCANCODE_2 = 31,
    SDL_SCANCODE_3 = 32,
    SDL_SCANCODE_4 = 33,
    SDL_SCANCODE_5 = 34,
    SDL_SCANCODE_6 = 35,
    SDL_SCANCODE_7 = 36,
    SDL_SCANCODE_8 = 37,
    SDL_SCANCODE_9 = 38,
    SDL_SCANCODE_0 = 39,
    SDL_SCANCODE_RETURN = 40,
    SDL_SCANCODE_ESCAPE = 41,
    SDL_SCANCODE_BACKSPACE = 42,
    SDL_SCANCODE_TAB = 43,
    SDL_SCANCODE_SPACE = 44,
    SDL_SCANCODE_MINUS = 45,
    SDL_SCANCODE_EQUALS = 46,
    SDL_SCANCODE_LEFTBRACKET = 47,
    SDL_SCANCODE_RIGHTBRACKET = 48,
    SDL_SCANCODE_BACKSLASH = 49,
    SDL_SCANCODE_SEMICOLON = 51,
    SDL_SCANCODE_APOSTROPHE = 52,
    SDL_SCANCODE_GRAVE = 53,
    SDL_SCANCODE_COMMA = 54,
    SDL_SCANCODE_PERIOD = 55,
    SDL_SCANCODE_SLASH = 56,
    SDL_SCANCODE_CAPSLOCK = 57,
    SDL_SCANCODE_F1 = 58,
    SDL_SCANCODE_F2 = 59,
    SDL_SCANCODE_F3 = 60,
    SDL_SCANCODE_F4 = 61,
    SDL_SCANCODE_F5 = 62,
    SDL_SCANCODE_F6 = 63,
    SDL_SCANCODE_F7 = 64,
    SDL_SCANCODE_F8 = 65,
    SDL_SCANCODE_F9 = 66,
    SDL_SCANCODE_F10 = 67,
    SDL_SCANCODE_F11 = 68,
    SDL_SCANCODE_F12 = 69,
    SDL_SCANCODE_PRINTSCREEN = 70,
    SDL_SCANCODE_SCROLLLOCK = 71,
    SDL_SCANCODE_PAUSE = 72,
    SDL_SCANCODE_INSERT = 73,
    SDL_SCANCODE_HOME = 74,
    SDL_SCANCODE_PAGEUP = 75,
    SDL_SCANCODE_DELETE = 76,
    SDL_SCANCODE_END = 77,
    SDL_SCANCODE_PAGEDOWN = 78,
    SDL_SCANCODE_RIGHT = 79,
    SDL_SCANCODE_LEFT = 80,
    SDL_SCANCODE_DOWN = 81,
    SDL_SCANCODE_UP = 82,
    SDL_SCANCODE_NUMLOCKCLEAR = 83,
    SDL_SCANCODE_KP_DIVIDE = 84,
    SDL_SCANCODE_KP_MULTIPLY = 85,
    SDL_SCANCODE_KP_MINUS = 86,
    SDL_SCANCODE_KP_PLUS = 87,
    SDL_SCANCODE_KP_ENTER = 88,
    SDL_SCANCODE_KP_1 = 89,
    SDL_SCANCODE_KP_2 = 90,
    SDL_SCANCODE_KP_3 = 91,
    SDL_SCANCODE_KP_4 = 92,
    SDL_SCANCODE_KP_5 = 93,
    SDL_SCANCODE_KP_6 = 94,
    SDL_SCANCODE_KP_7 = 95,
    SDL_SCANCODE_KP_8 = 96,
    SDL_SCANCODE_KP_9 = 97,
    SDL_SCANCODE_KP_0 = 98,
    SDL_SCANCODE_KP_PERIOD = 99,
    SDL_SCANCODE_LCTRL = 224,
    SDL_SCANCODE_LSHIFT = 225,
    SDL_SCANCODE_LALT = 226,
    SDL_SCANCODE_LGUI = 227,
    SDL_SCANCODE_RCTRL = 228,
    SDL_SCANCODE_RSHIFT = 229,
    SDL_SCANCODE_RALT = 230,
    SDL_SCANCODE_RGUI = 231,
} SDL3_Scancode;

static inline int SDL3_ScancodeToGLFWKey(int scancode) {
    switch (scancode) {
        case SDL_SCANCODE_A: return GLFW_KEY_A;
        case SDL_SCANCODE_B: return GLFW_KEY_B;
        case SDL_SCANCODE_C: return GLFW_KEY_C;
        case SDL_SCANCODE_D: return GLFW_KEY_D;
        case SDL_SCANCODE_E: return GLFW_KEY_E;
        case SDL_SCANCODE_F: return GLFW_KEY_F;
        case SDL_SCANCODE_G: return GLFW_KEY_G;
        case SDL_SCANCODE_H: return GLFW_KEY_H;
        case SDL_SCANCODE_I: return GLFW_KEY_I;
        case SDL_SCANCODE_J: return GLFW_KEY_J;
        case SDL_SCANCODE_K: return GLFW_KEY_K;
        case SDL_SCANCODE_L: return GLFW_KEY_L;
        case SDL_SCANCODE_M: return GLFW_KEY_M;
        case SDL_SCANCODE_N: return GLFW_KEY_N;
        case SDL_SCANCODE_O: return GLFW_KEY_O;
        case SDL_SCANCODE_P: return GLFW_KEY_P;
        case SDL_SCANCODE_Q: return GLFW_KEY_Q;
        case SDL_SCANCODE_R: return GLFW_KEY_R;
        case SDL_SCANCODE_S: return GLFW_KEY_S;
        case SDL_SCANCODE_T: return GLFW_KEY_T;
        case SDL_SCANCODE_U: return GLFW_KEY_U;
        case SDL_SCANCODE_V: return GLFW_KEY_V;
        case SDL_SCANCODE_W: return GLFW_KEY_W;
        case SDL_SCANCODE_X: return GLFW_KEY_X;
        case SDL_SCANCODE_Y: return GLFW_KEY_Y;
        case SDL_SCANCODE_Z: return GLFW_KEY_Z;
        case SDL_SCANCODE_1: return GLFW_KEY_1;
        case SDL_SCANCODE_2: return GLFW_KEY_2;
        case SDL_SCANCODE_3: return GLFW_KEY_3;
        case SDL_SCANCODE_4: return GLFW_KEY_4;
        case SDL_SCANCODE_5: return GLFW_KEY_5;
        case SDL_SCANCODE_6: return GLFW_KEY_6;
        case SDL_SCANCODE_7: return GLFW_KEY_7;
        case SDL_SCANCODE_8: return GLFW_KEY_8;
        case SDL_SCANCODE_9: return GLFW_KEY_9;
        case SDL_SCANCODE_0: return GLFW_KEY_0;
        case SDL_SCANCODE_SPACE: return GLFW_KEY_SPACE;
        case SDL_SCANCODE_MINUS: return GLFW_KEY_MINUS;
        case SDL_SCANCODE_EQUALS: return GLFW_KEY_EQUAL;
        case SDL_SCANCODE_LEFTBRACKET: return GLFW_KEY_LEFT_BRACKET;
        case SDL_SCANCODE_RIGHTBRACKET: return GLFW_KEY_RIGHT_BRACKET;
        case SDL_SCANCODE_BACKSLASH: return GLFW_KEY_BACKSLASH;
        case SDL_SCANCODE_SEMICOLON: return GLFW_KEY_SEMICOLON;
        case SDL_SCANCODE_APOSTROPHE: return GLFW_KEY_APOSTROPHE;
        case SDL_SCANCODE_GRAVE: return GLFW_KEY_GRAVE_ACCENT;
        case SDL_SCANCODE_COMMA: return GLFW_KEY_COMMA;
        case SDL_SCANCODE_PERIOD: return GLFW_KEY_PERIOD;
        case SDL_SCANCODE_SLASH: return GLFW_KEY_SLASH;
        case SDL_SCANCODE_ESCAPE: return GLFW_KEY_ESCAPE;
        case SDL_SCANCODE_RETURN: return GLFW_KEY_ENTER;
        case SDL_SCANCODE_TAB: return GLFW_KEY_TAB;
        case SDL_SCANCODE_BACKSPACE: return GLFW_KEY_BACKSPACE;
        case SDL_SCANCODE_INSERT: return GLFW_KEY_INSERT;
        case SDL_SCANCODE_DELETE: return GLFW_KEY_DELETE;
        case SDL_SCANCODE_RIGHT: return GLFW_KEY_DPAD_RIGHT;
        case SDL_SCANCODE_LEFT: return GLFW_KEY_DPAD_LEFT;
        case SDL_SCANCODE_DOWN: return GLFW_KEY_DPAD_DOWN;
        case SDL_SCANCODE_UP: return GLFW_KEY_DPAD_UP;
        case SDL_SCANCODE_PAGEUP: return GLFW_KEY_PAGE_UP;
        case SDL_SCANCODE_PAGEDOWN: return GLFW_KEY_PAGE_DOWN;
        case SDL_SCANCODE_HOME: return GLFW_KEY_HOME;
        case SDL_SCANCODE_END: return GLFW_KEY_END;
        case SDL_SCANCODE_CAPSLOCK: return GLFW_KEY_CAPS_LOCK;
        case SDL_SCANCODE_SCROLLLOCK: return GLFW_KEY_SCROLL_LOCK;
        case SDL_SCANCODE_NUMLOCKCLEAR: return GLFW_KEY_NUM_LOCK;
        case SDL_SCANCODE_PRINTSCREEN: return GLFW_KEY_PRINT_SCREEN;
        case SDL_SCANCODE_PAUSE: return GLFW_KEY_PAUSE;
        case SDL_SCANCODE_F1: return GLFW_KEY_F1;
        case SDL_SCANCODE_F2: return GLFW_KEY_F2;
        case SDL_SCANCODE_F3: return GLFW_KEY_F3;
        case SDL_SCANCODE_F4: return GLFW_KEY_F4;
        case SDL_SCANCODE_F5: return GLFW_KEY_F5;
        case SDL_SCANCODE_F6: return GLFW_KEY_F6;
        case SDL_SCANCODE_F7: return GLFW_KEY_F7;
        case SDL_SCANCODE_F8: return GLFW_KEY_F8;
        case SDL_SCANCODE_F9: return GLFW_KEY_F9;
        case SDL_SCANCODE_F10: return GLFW_KEY_F10;
        case SDL_SCANCODE_F11: return GLFW_KEY_F11;
        case SDL_SCANCODE_F12: return GLFW_KEY_F12;
        case SDL_SCANCODE_LCTRL: return GLFW_KEY_LEFT_CONTROL;
        case SDL_SCANCODE_RCTRL: return GLFW_KEY_RIGHT_CONTROL;
        case SDL_SCANCODE_LSHIFT: return GLFW_KEY_LEFT_SHIFT;
        case SDL_SCANCODE_RSHIFT: return GLFW_KEY_RIGHT_SHIFT;
        case SDL_SCANCODE_LALT: return GLFW_KEY_LEFT_ALT;
        case SDL_SCANCODE_RALT: return GLFW_KEY_RIGHT_ALT;
        case SDL_SCANCODE_LGUI: return GLFW_KEY_LEFT_SUPER;
        case SDL_SCANCODE_RGUI: return GLFW_KEY_RIGHT_SUPER;
        case SDL_SCANCODE_KP_0: return GLFW_KEY_NUMPAD_0;
        case SDL_SCANCODE_KP_1: return GLFW_KEY_NUMPAD_1;
        case SDL_SCANCODE_KP_2: return GLFW_KEY_NUMPAD_2;
        case SDL_SCANCODE_KP_3: return GLFW_KEY_NUMPAD_3;
        case SDL_SCANCODE_KP_4: return GLFW_KEY_NUMPAD_4;
        case SDL_SCANCODE_KP_5: return GLFW_KEY_NUMPAD_5;
        case SDL_SCANCODE_KP_6: return GLFW_KEY_NUMPAD_6;
        case SDL_SCANCODE_KP_7: return GLFW_KEY_NUMPAD_7;
        case SDL_SCANCODE_KP_8: return GLFW_KEY_NUMPAD_8;
        case SDL_SCANCODE_KP_9: return GLFW_KEY_NUMPAD_9;
        case SDL_SCANCODE_KP_PERIOD: return GLFW_KEY_NUMPAD_DECIMAL;
        case SDL_SCANCODE_KP_DIVIDE: return GLFW_KEY_NUMPAD_DIVIDE;
        case SDL_SCANCODE_KP_MULTIPLY: return GLFW_KEY_NUMPAD_MULTIPLY;
        case SDL_SCANCODE_KP_MINUS: return GLFW_KEY_NUMPAD_SUBTRACT;
        case SDL_SCANCODE_KP_PLUS: return GLFW_KEY_NUMPAD_ADD;
        case SDL_SCANCODE_KP_ENTER: return GLFW_KEY_NUMPAD_ENTER;
        default: return GLFW_KEY_UNKNOWN;
    }
}

static inline int SDL3_ModsToGLFWMods(int sdl_mods) {
    int glfw_mods = 0;
    #define KMOD_LSHIFT 0x0001
    #define KMOD_RSHIFT 0x0002
    #define KMOD_LCTRL  0x0040
    #define KMOD_RCTRL  0x0080
    #define KMOD_LALT   0x0100
    #define KMOD_RALT   0x0200
    #define KMOD_LGUI   0x0400
    #define KMOD_RGUI   0x0800
    #define KMOD_CAPS   0x2000
    #define KMOD_NUM    0x4000
    if (sdl_mods & (KMOD_LSHIFT | KMOD_RSHIFT)) glfw_mods |= GLFW_MOD_SHIFT;
    if (sdl_mods & (KMOD_LCTRL | KMOD_RCTRL)) glfw_mods |= GLFW_MOD_CONTROL;
    if (sdl_mods & (KMOD_LALT | KMOD_RALT)) glfw_mods |= GLFW_MOD_ALT;
    if (sdl_mods & (KMOD_LGUI | KMOD_RGUI)) glfw_mods |= GLFW_MOD_SUPER;
    if (sdl_mods & KMOD_CAPS) glfw_mods |= GLFW_MOD_CAPS_LOCK;
    if (sdl_mods & KMOD_NUM) glfw_mods |= GLFW_MOD_NUM_LOCK;
    #undef KMOD_LSHIFT
    #undef KMOD_RSHIFT
    #undef KMOD_LCTRL
    #undef KMOD_RCTRL
    #undef KMOD_LALT
    #undef KMOD_RALT
    #undef KMOD_LGUI
    #undef KMOD_RGUI
    #undef KMOD_CAPS
    #undef KMOD_NUM
    return glfw_mods;
}
