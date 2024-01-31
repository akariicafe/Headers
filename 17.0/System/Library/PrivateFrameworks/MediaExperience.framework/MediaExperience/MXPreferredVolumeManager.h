@interface MXPreferredVolumeManager : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)postNotification:(id)a0 category:(id)a1 mode:(id)a2 volume:(float)a3 rampUpwardDuration:(float)a4 rampDownwardDuration:(float)a5 silenceVolumeHUD:(BOOL)a6 reason:(id)a7 refCon:(id)a8 sequenceNumber:(long long)a9;

@end
