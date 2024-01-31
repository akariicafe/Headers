@class NSNumber, NSMutableSet;

@interface CMContinuityCaptureFrameRateManager : NSObject {
    unsigned int _userRequestedMinFrameRate;
    unsigned int _userRequestedMaxFrameRate;
    unsigned int _allowedMinFrameRate;
    unsigned int _allowedMaxFrameRate;
    NSMutableSet *_activeControlsByNameThrottlingFrameRate;
    NSMutableSet *_activeStreamEntitiesThrottlingFrameRate;
    NSNumber *_throttledFrameRate;
    _Atomic BOOL _throttled;
}

@property (readonly) unsigned int allowedMinFrameRate;
@property (readonly) unsigned int allowedMaxFrameRate;
@property (readonly) BOOL throttled;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)lowPowerModeChanged:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_handleThermalLevelLowPowerModeChange;
- (BOOL)activeControlsForFrameRateThrottle;
- (void)reportControlStatus:(BOOL)a0 forControlName:(id)a1;
- (void)reportStreamStatus:(BOOL)a0 forConfiguration:(id)a1;
- (void)updateAllowedFPS;

@end
