
#Custom version by Ian micheal included fast math built in Dreamhal
#based on chui's great sdl now for kos2.0 fast blit and pixel
#dreamhal memory routines and replacements Threading update
#thanks to all in the scene that support me

KOS_CFLAGS += -Ofast -Iinclude -Isrc -Isrc/audio -Isrc/cdrom -Isrc/endian
KOS_CFLAGS += -Isrc/events -Isrc/joystick -Isrc/thread/dc -Isrc/thread -Isrc/timer
KOS_CFLAGS += -Isrc/video -DNO_SIGNAL_H -DENABLE_DC -DSDL_CDROM_DISABLED -DSDL_AUDIO_DISABLED -DSDL_JOYSTICK_DISABLED

TARGET = libSDL.a

OBJS = \
	src/stdlib/SDL_string.o \
	src/events/SDL_active.o \
	src/events/SDL_expose.o \
	src/events/SDL_quit.o \
	src/events/SDL_resize.o \
	src/file/SDL_rwops.o \
	src/SDL.o \
	src/SDL_error.o \
	src/SDL_fatal.o \
	src/thread/dc/SDL_syscond.o \
	src/thread/dc/SDL_sysmutex.o \
	src/thread/dc/SDL_syssem.o \
	src/thread/dc/SDL_systhread.o \
	src/thread/SDL_thread.o \
	src/timer/dc/SDL_systimer.o \
	src/timer/SDL_timer.o \
	src/video/dc/memset.o \
	src/video/dc/memcmp.o \
	src/video/dc/memcpy.o \
	src/video/dc/memmove.o \
	src/video/dc/SDL_dcevents.o \
	src/video/dc/SDL_dcvideo.o \
	src/video/SDL_blit.o \
	src/video/SDL_blit_0.o \
	src/video/SDL_blit_1.o \
	src/video/SDL_blit_A.o \
	src/video/SDL_blit_N.o \
	src/video/SDL_bmp.o \
	src/video/SDL_gamma.o \
	src/video/SDL_pixels.o \
	src/video/SDL_RLEaccel.o \
	src/video/SDL_stretch.o \
	src/video/SDL_surface.o \
	src/video/SDL_video.o \
	src/cpuinfo/SDL_cpuinfo.o \



include $(KOS_BASE)/addons/Makefile.prefab
