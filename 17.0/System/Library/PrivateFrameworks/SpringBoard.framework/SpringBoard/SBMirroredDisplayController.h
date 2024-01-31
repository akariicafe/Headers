@class NSString, FBSDisplayConfiguration, BSAtomicSignal, SBDisplayAssertion, SBExternalDisplayDefaults, NSObject, CADisplay, FBSDisplayIdentity, CADisplayMode;
@protocol OS_dispatch_queue, BSInvalidatable, FBSDisplayLayoutPublishing;

@interface SBMirroredDisplayController : NSObject <SBDisplayControlling> {
    SBExternalDisplayDefaults *_externalDisplayDefaults;
    FBSDisplayIdentity *_displayIdentity;
    FBSDisplayConfiguration *_currentConfiguration;
    id<FBSDisplayLayoutPublishing> _layoutPublisher;
    SBDisplayAssertion *_displayAssertion;
    BSAtomicSignal *_lostControlOfDisplaySignal;
    NSString *_idleSleepReason;
    NSObject<OS_dispatch_queue> *_displayMutationQueue;
    CADisplay *_caDisplay;
    CADisplayMode *_requestedMode;
    NSString *_requestedOverscanAdjustment;
    struct CGSize { double width; double height; } _requestedLogicalScale;
    id<BSInvalidatable> _stateCaptureToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)displayAssertion:(id)a0 didLoseControlOfDisplayForDeactivationReasons:(unsigned long long)a1;
- (void)_ensureCADisplayModeForMirroring;
- (void)_updateDisplayAssertion;
- (void)_updateIdleSleepReason:(id)a0;
- (void)connectToDisplayIdentity:(id)a0 configuration:(id)a1 displayManager:(id)a2 sceneManager:(id)a3 caDisplayQueue:(id)a4 assertion:(id)a5;
- (void)displayAssertionDidGainControlOfDisplay:(id)a0;
- (void)displayIdentityDidDisconnect:(id)a0;
- (void)displayIdentityDidUpdate:(id)a0 configuration:(id)a1;
- (id)initWithExternalDisplayDefaults:(id)a0;

@end
