@interface CSManualDuckingHandler : NSObject

- (id)init;
- (void)duckAudioDeviceWithDeviceID:(unsigned int)a0 duckedLevel:(float)a1 rampDuration:(float)a2;
- (void)duckDefaultOutputAudioDeviceWithDuckedLevel:(float)a0 rampDuration:(float)a1;
- (void)resetDucking;

@end
