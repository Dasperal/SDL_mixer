/* 

    TiMidity -- Experimental MIDI to WAVE converter
    Copyright (C) 1995 Tuukka Toivonen <toivonen@clinet.fi>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the Perl Artistic License, available in COPYING.

    tables.h
*/

#if defined(HAVE_LIBC) && defined(__WATCOMC__) /* Watcom has issues... */
#define SDL_sin  sin
#endif
#define sine(x) (SDL_sin((2*PI/1024.0) * (x)))

#define SINE_CYCLE_LENGTH 1024
extern const Sint32 freq_table[];
extern const double vol_table[];
extern const double bend_fine[];
extern const double bend_coarse[];
