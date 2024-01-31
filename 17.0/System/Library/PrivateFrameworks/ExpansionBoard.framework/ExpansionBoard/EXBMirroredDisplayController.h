@class CADisplayMode, NSString, FBSDisplayConfiguration, CADisplay, BSAtomicSignal, NSObject, FBSDisplayIdentity, EXBDisplayAssertion;
@protocol OS_dispatch_queue;

@interface EXBMirroredDisplayController : NSObject <EXBDisplayControlling> {
    FBSDisplayIdentity *_displayIdentity;
    FBSDisplayConfiguration *_currentConfiguration;
    EXBDisplayAssertion *_displayAssertion;
    BSAtomicSignal *_lostControlOfDisplaySignal;
    NSString *_idleSleepReason;
    NSObject<OS_dispatch_queue> *_displayMutationQueue;
    CADisplay *_caDisplay;
    CADisplayMode *_requestedMode;
    NSString *_requestedOverscanAdjustment;
    struct CGSize { double width; double height; } _requestedLogicalScale;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)displayAssertion:(id)a0 didLoseControlOfDisplayForDeactivationReasons:(unsigned long long)a1;
- (void)_ensureCADisplayModeForMirroring;
- (void)_updateDisplayAssertion;
- (void)_updateIdleSleepReason:(id)a0;
- (void)displayIdentityDidDisconnect:(id)a0;
- (void)displayIdentityDidUpdate:(id)a0 configuration:(id)a1;
- (void)connectToDisplayIdentity:(id)a0 configuration:(id)a1 displayTransformUpdater:(id)a2 caDisplayQueue:(id)a3 assertion:(id)a4;
- (void)displayAssertionDidGainControlOfDisplay:(id)a0 previousDeactivationReasons:(unsigned long long)a1;
- (void)transformDisplayConfigurationWithBuilder:(id)a0;

@end
