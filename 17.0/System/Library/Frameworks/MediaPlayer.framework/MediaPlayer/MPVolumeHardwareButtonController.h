@protocol MPVolumeControllerDataSource;

@interface MPVolumeHardwareButtonController : NSObject {
    double _pendingVolumeChange;
    BOOL _debounceVolumeRepeat;
    BOOL _didRegisterForButtonNotifications;
}

@property (class, readonly, nonatomic) MPVolumeHardwareButtonController *sharedController;

@property (retain, nonatomic) id<MPVolumeControllerDataSource> activeDataSource;

- (void)cancelVolumeEvent;
- (void)decreaseVolume;
- (void)increaseVolume;
- (id)_init;
- (void)handleVolumeButtonWithType:(long long)a0 down:(BOOL)a1;
- (void)_volumeDownButtonTouchDown:(id)a0;
- (void)handleVolumeUpButton;
- (void)_applicationWillResignActiveNotification;
- (double)_calculateButtonRepeatDelay;
- (void)_commitVolumeChange;
- (void)_registerForButtonNotificationsIfNeeded;
- (void)_volumeUpButtonTouchDown:(id)a0;
- (void)_volumeDownButtonTouchUp:(id)a0;
- (void)_applicationDidBecomeActiveNotification;
- (void).cxx_destruct;
- (void)_changeVolumeBy:(double)a0;
- (void)handleVolumeDownButton;
- (void)_volumeUpButtonTouchUp:(id)a0;
- (void)_unregisterForButtonNotificationsIfNeeded;

@end
