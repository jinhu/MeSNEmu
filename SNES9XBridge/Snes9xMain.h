//
//  Snes9xMain.h
//  SiOS
//
//  Created by Lucas Menge on 1/2/12.
//  Copyright (c) 2012 Lucas Menge. All rights reserved.
//

#ifndef SiOS_Snes9xMain_h
#define SiOS_Snes9xMain_h

#include "../SNES9X/port.h"

typedef struct {
  int playback_rate;
  bool8 stereo;
  bool8 mute_sound;
  uint8 sound_switch;
  int noise_gen;
	uint32 freqbase; // notaz
} SoundStatus;

const char *SIGetSnapshotDirectory(void);
void SILoadSRAM (void);
void SISaveSRAM (void);
void SIFlipFramebuffer(int flip, int sync);

#ifdef __cplusplus
extern "C" {
#endif
  
int SIStartWithROM (char* rom_filename);
  
#ifdef __cplusplus
}
#endif

#endif
