@class NSString, NSHashTable, SBKeyboardHomeAffordanceAssertion, SBHomeGrabberRotationView;

@interface SBKeyboardHomeAffordanceController : NSObject <SBHomeGrabberDelegate, SBSceneHandleObserver, SBUIActiveOrientationObserver, SBMedusaHostedKeyboardWindowControllerObserver> {
    NSHashTable *_assertions;
    SBHomeGrabberRotationView *_homeGrabberView;
    BOOL _isHomeGrabberContainingViewAlwaysPortrait;
    BOOL _isKeyboardDocked;
    SBKeyboardHomeAffordanceAssertion *_topMostAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)shouldAllowAutoHideForHomeGrabberView:(id)a0;
- (BOOL)shouldAllowThinStyleForHomeGrabberView:(id)a0;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)a0;
- (id)init;
- (void)dealloc;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (void).cxx_destruct;
- (void)unregisterAssertion:(id)a0;
- (void)_updateHomeAffordance;
- (void)_didChangeAdditionalEdgeMarginForAssertion:(id)a0;
- (void)_didChangeKeyboardDocked:(id)a0;
- (void)_getHomeGrabberContainingView:(id *)a0 isAlwaysPortrait:(BOOL *)a1;
- (void)_updateTopMostAssertion;
- (void)registerAssertion:(id)a0;
- (void)usingMedusaHostedKeyboardWindowDidChange;

@end
