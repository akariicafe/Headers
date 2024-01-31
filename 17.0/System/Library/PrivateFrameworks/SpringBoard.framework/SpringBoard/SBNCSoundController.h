@class SBLockStateAggregator, NSMutableDictionary, NSMutableSet, SBLockScreenManager;

@interface SBNCSoundController : NSObject

@property (retain, nonatomic) SBLockScreenManager *lockScreenManager;
@property (retain, nonatomic) SBLockStateAggregator *lockStateAggregator;
@property (retain, nonatomic) NSMutableDictionary *playingSounds;
@property (retain, nonatomic) NSMutableSet *requestsRequiringExplicitKill;

- (id)init;
- (BOOL)_isDeviceUILocked;
- (id)initWithLockScreenManager:(id)a0 lockStateAggregator:(id)a1;
- (void)playSoundIfPossibleForNotificationRequest:(id)a0 presentingDestination:(id)a1;
- (id)_ambientPresentationController;
- (void)_lockStateChanged:(id)a0;
- (BOOL)_preventVibrations;
- (void)playSoundForNotificationRequest:(id)a0 presentingDestination:(id)a1;
- (void).cxx_destruct;
- (void)stopSoundForNotificationRequest:(id)a0;
- (BOOL)canPlaySoundForNotificationRequest:(id)a0;
- (void)_killSounds;
- (void)_hardwareButtonPressed:(id)a0;

@end
