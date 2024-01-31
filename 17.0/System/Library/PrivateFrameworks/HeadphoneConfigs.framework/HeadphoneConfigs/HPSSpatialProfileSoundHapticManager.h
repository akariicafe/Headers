@class NSObject, CHHapticEngine;
@protocol OS_dispatch_queue, CHHapticAdvancedPatternPlayer;

@interface HPSSpatialProfileSoundHapticManager : NSObject {
    CHHapticEngine *_engine;
    id<CHHapticAdvancedPatternPlayer> _scanLockPlayer;
    id<CHHapticAdvancedPatternPlayer> _scanInProgressPlayer;
    id<CHHapticAdvancedPatternPlayer> _enrollGuidancePlayer;
    id<CHHapticAdvancedPatternPlayer> _scanFirstTickPlayer;
    id<CHHapticAdvancedPatternPlayer> _scanSecondTickPlayer;
    id<CHHapticAdvancedPatternPlayer> _scanCompletedPlayer;
    id<CHHapticAdvancedPatternPlayer> _scanErrorPlayer;
    id<CHHapticAdvancedPatternPlayer> _enrollmentCompletedPlayer;
    BOOL _dynamicEnrollmentFeedback;
    NSObject<OS_dispatch_queue> *_soundHapticSerialQueue;
}

- (id)init;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (id)initPlayerWithFileName:(id)a0;
- (BOOL)isEnrollGuidancePlaying;
- (void)pauseEnrollGuidancePlayer;
- (void)pauseProgressPlayer;
- (void)playEnrollGuidance:(int)a0;
- (void)playProgressPlayer:(int)a0;
- (void)readDynamicEnrollmentFeedback;
- (void)setEnrollGuidancePitch:(float)a0;
- (void)setProgressPlayerPitch:(float)a0;
- (void)setupPlayers;
- (void)triggerSoundHapticForEarCaptureState:(int)a0 completion:(id /* block */)a1;
- (void)triggerSoundHapticForEnrollmentState:(int)a0 completion:(id /* block */)a1;

@end
