@class BrightnessSystemClient;
@protocol NTKAmbientIlluminationMonitorDelegate;

@interface NTKAmbientIlluminationMonitor : NSObject {
    BrightnessSystemClient *_brightnessSystemClient;
    unsigned long long _skippedLux;
    double _lastLoggedLux;
    unsigned long long _skippedNits;
    double _lastLoggedNits;
}

@property (nonatomic, setter=_setAmbientLux:) double ambientLux;
@property (nonatomic, setter=_setDisplayNits:) double displayNits;
@property (weak, nonatomic) id<NTKAmbientIlluminationMonitorDelegate> delegate;

- (void)_registerForNotifications;
- (id)init;
- (void)_unregisterForNotifications;
- (void).cxx_destruct;

@end
