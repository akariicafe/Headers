@class SiriContextOverride, SASSystemState;

@interface SASOverriddenSystemState : SASSystemState

@property (retain, nonatomic) SASSystemState *systemState;
@property (retain, nonatomic) SiriContextOverride *contextOverride;

- (id)lockStateMonitor;
- (BOOL)isPad;
- (void)setLockStateMonitor:(id)a0;
- (BOOL)isConnectedToCarPlay;
- (id)initWithSystemState:(id)a0 contextOverride:(id)a1;
- (BOOL)pocketStateShouldPreventVoiceTrigger;
- (BOOL)hasUnlockedSinceBoot;
- (BOOL)deviceIsBlocked;
- (BOOL)siriIsRestricted;
- (BOOL)accessibilityShortcutEnabled;
- (BOOL)siriIsSupported;
- (BOOL)smartCoverClosed;
- (void).cxx_destruct;
- (BOOL)deviceIsPasscodeLocked;
- (id)currentSpokenLanguageCode;
- (BOOL)isConnectedToTrustedCarPlay;
- (BOOL)siriIsEnabled;
- (BOOL)carDNDActive;

@end
