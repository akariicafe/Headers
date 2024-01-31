@class NSString;

@interface SBControlCenterSystemAgent : NSObject <CCUIControlCenterSystemAgent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isUILocked;
- (id)observeRingerMutedWithBlock:(id /* block */)a0;
- (BOOL)isRingerMuted;
- (BOOL)isOrientationLocked;
- (void)setRingerMuted:(BOOL)a0 reason:(id)a1;
- (void)lockOrientation;
- (void)unlockOrientation;

@end
