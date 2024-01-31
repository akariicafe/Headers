@class UIApplicationSceneDeactivationAssertion;

@interface SBHomeScreenReturnToSpotlightPolicy : NSObject {
    long long _lastKnownActivationState;
    double _anchorTimeForReactivationWindow;
    BOOL _shouldReactivateSpotlight;
    UIApplicationSceneDeactivationAssertion *_spotlightSceneDeactivationAssertion;
    UIApplicationSceneDeactivationAssertion *_homeScreenInactiveReason;
}

@property (class, readonly, nonatomic) BOOL areSpotlightBreadcrumbsEnabled;

@property (nonatomic) double reactivationWindowDuration;
@property (nonatomic) BOOL shouldAnimateReactivation;

- (id)init;
- (void).cxx_destruct;
- (double)_elapsedTime;
- (unsigned long long)homeScreenZStackParticipantDidChange:(id)a0 launchingForSpotlight:(BOOL)a1;
- (void)willReactivateSpotlight;

@end
