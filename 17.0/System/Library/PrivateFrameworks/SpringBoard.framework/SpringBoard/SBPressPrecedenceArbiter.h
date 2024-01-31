@class NSArray, NSString;

@interface SBPressPrecedenceArbiter : NSObject <SBAVSystemControllerCacheObserver> {
    unsigned long long _volumeAndLockButtonPriority;
    long long _homeButtonType;
    BOOL _isAudioPlayingSomewhere;
}

@property (retain, nonatomic) NSArray *hardwareButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_applyButtonPriority:(unsigned long long)a0;
- (unsigned long long)_currentButtonPriority;
- (BOOL)_shouldArbitrateLockAndVolumeHardwareButtonPriorities;
- (void)_updateButtonPrioritiesForNotification:(id)a0;
- (void)_updateButtonPriority;
- (void)cache:(id)a0 didUpdateAudioSessionPlaying:(BOOL)a1;
- (id)initWithHomeButtonType:(long long)a0;

@end
