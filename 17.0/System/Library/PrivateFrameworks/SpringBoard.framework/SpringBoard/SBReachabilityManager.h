@class NSHashTable, NSString, SBScreenEdgePanGestureRecognizer, SBReachabilityWindow, UITransform, UITapGestureRecognizer, SBFZStackParticipant, NSMutableSet, SBReachabilityGestureRecognizer, UIPanGestureRecognizer, SBWindowScene;

@interface SBReachabilityManager : NSObject <SBSystemGestureRecognizerDelegate, SBFZStackParticipantDelegate> {
    NSHashTable *_observers;
    unsigned long long _reachabilityExtensionGenerationCount;
    BOOL _reachabilityModeEnabled;
    NSMutableSet *_temporaryEnabledReasons;
    NSMutableSet *_temporaryDisabledReasons;
    SBReachabilityWindow *_reachabilityWindow;
    UITransform *_reachabilityTransform;
    UITransform *_inverseReachabilityTransform;
    UITapGestureRecognizer *_dismissTapGestureRecognizer;
    SBFZStackParticipant *_zStackParticipant;
    NSHashTable *_ignoredWindows;
    long long _animationsInFlight;
}

@property (readonly, nonatomic) BOOL reachabilityModeActive;
@property (nonatomic) BOOL reachabilityEnabled;
@property (readonly, nonatomic) SBReachabilityGestureRecognizer *reachabilityGestureRecognizer;
@property (readonly, nonatomic) SBScreenEdgePanGestureRecognizer *dismissEdgeGestureRecognizer;
@property (readonly, nonatomic) UIPanGestureRecognizer *dismissPanGestureRecognizer;
@property (readonly, nonatomic) double reachabilityYOffset;
@property (readonly, nonatomic) double effectiveReachabilityYOffset;
@property (retain, nonatomic) SBWindowScene *windowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)reachabilitySupported;

- (void)zStackParticipantDidChange:(id)a0;
- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_setupGestureRecognizers;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)toggleReachability;
- (void).cxx_destruct;
- (void)_screenDidDim;
- (void)deactivateReachability;
- (id)viewForSystemGestureRecognizer:(id)a0;
- (void)addObserver:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_handleSignificantTimeChanged;
- (void)_activateReachability:(id)a0;
- (void)_modifyDefaultPresentationContextHostTransformForWindow:(id)a0 fromTransform:(id)a1 toTransform:(id)a2;
- (void)_notifyObserversDidEndReachabilityAnimation;
- (void)_notifyObserversReachabilityModeActive:(BOOL)a0;
- (void)_notifyObserversReachabilityYOffsetDidChange;
- (void)_notifyObserversWillBeginReachabilityAnimation;
- (void)_panToDeactivateReachability:(id)a0;
- (void)_pingKeepAliveWithDuration:(double)a0 interactedBeforePing:(BOOL)a1 initialKeepAliveTime:(double)a2;
- (id)_sceneForWindow:(id)a0;
- (void)_setKeepAliveTimer;
- (void)_setupReachabilityWindowIfNecessary;
- (void)_tapToDeactivateReachability:(id)a0;
- (void)_tearDownReachabilityWindow;
- (void)_toggleReachabilityMode;
- (void)_transitionWithTransformer:(id)a0 fromTransform:(id)a1 toTransform:(id)a2;
- (void)_updateReachabilityModeActive:(BOOL)a0;
- (void)_updateReachabilityModeActive:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateReachabilityWindowForYOffset:(double)a0 mode:(long long)a1 completion:(id /* block */)a2;
- (BOOL)canActivateReachability;
- (void)ignoreWindowForReachability:(id)a0;
- (id)ignoredWindows;
- (void)setReachabilityTemporarilyDisabled:(BOOL)a0 forReason:(id)a1;
- (void)setReachabilityTemporarilyEnabled:(BOOL)a0 forReason:(id)a1;

@end
