@class NSObject;
@protocol OS_dispatch_queue;

@interface CSSiriVibrationManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    long long _ringVibrationState;
    long long _silentVibrationState;
}

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_fetchRingVibrationValue;
- (void)_fetchSilentVibrationValue;
- (BOOL)_ringVibrationValue;
- (BOOL)_silentVibrationValue;
- (void)handleRingVibrationValueChange;
- (void)handleSilentVibrationValueChange;
- (BOOL)vibratesForDeviceRingerSwitchState:(long long)a0;

@end
