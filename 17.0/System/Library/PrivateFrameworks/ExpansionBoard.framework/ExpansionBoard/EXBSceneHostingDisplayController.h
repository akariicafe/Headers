@class FBSDisplayConfiguration, FBSceneWorkspace, CADisplay, EXBDisplayAssertion, NSObject, EXBDisplayAssertionPreferences, FBSSceneSpecification, FBSDisplayConfigurationRequest, UIRootSceneWindow, BSAtomicSignal, FBScene, NSString, EXBDisplayTransformDescriptor, _UIRootWindow, EXBRootWindowScenePresentationBinder, FBSDisplayIdentity;
@protocol OS_dispatch_queue, EXBDisplayTransformUpdating, EXBSceneHostingDisplayControllerDelegate;

@interface EXBSceneHostingDisplayController : NSObject <EXBDisplayEndpointHostComponentDelegate, EXBDisplayControlling> {
    unsigned long long _priorityLevel;
    unsigned long long _deactivationReasonsWhenActive;
    EXBDisplayTransformDescriptor *_descriptor;
    FBSSceneSpecification *_sceneSpecification;
    FBSceneWorkspace *_workspace;
    NSObject<OS_dispatch_queue> *_presentationUpdateQueue;
    FBSDisplayIdentity *_displayIdentity;
    FBSDisplayConfigurationRequest *_initialDisplayConfigurationRequest;
    id<EXBDisplayTransformUpdating> _displayUpdater;
    EXBDisplayAssertion *_displayAssertion;
    CADisplay *_caDisplay;
    NSObject<OS_dispatch_queue> *_caDisplayMutationQueue;
    BOOL _hasEnqueuedUpdate;
    BSAtomicSignal *_readyToTransformDisplaysSignal;
    _UIRootWindow *_blankingWindow;
    EXBDisplayAssertionPreferences *_currentDisplayAssertionPreferences;
    unsigned long long _currentDeactivationReasons;
    FBSDisplayConfiguration *_currentConfiguration;
    FBSDisplayConfiguration *_presentedConfiguration;
    BSAtomicSignal *_presentationUpdateInvalidationSignal;
    BSAtomicSignal *_displayDisconnectedSignal;
    UIRootSceneWindow *_rootWindow;
    EXBRootWindowScenePresentationBinder *_presentationBinder;
    FBScene *_scene;
}

@property (weak, nonatomic) id<EXBSceneHostingDisplayControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)displayAssertion:(id)a0 didLoseControlOfDisplayForDeactivationReasons:(unsigned long long)a1;
- (id)_createBlankingWindowWithConfiguration:(id)a0;
- (id)_createDisplayAssertionPreferences;
- (void)_enqueueEvaluateAndApplyPresentationUpdate;
- (void)_ensureCADisplayUpToDate:(id)a0 completion:(id /* block */)a1;
- (id)_hostComponent;
- (void)_sendBlankingWindowToFront:(BOOL)a0;
- (void)_updateBlankingWindowIfNecessary;
- (void)_updatePresentationBinderIfNecessary;
- (void)displayIdentityDidDisconnect:(id)a0;
- (void)displayIdentityDidUpdate:(id)a0 configuration:(id)a1;
- (id)_FBSDisplayConfigurationRequest;
- (id)_CADisplayModeCriteriaFromRequest:(id)a0;
- (id)_createRootWindow;
- (struct CGSize { double x0; double x1; })_logicalScaleForFBSRequest:(id)a0 CADisplay:(id)a1;
- (void)_updateHostComponentIfNecessary:(id /* block */)a0;
- (void)connectToDisplayIdentity:(id)a0 configuration:(id)a1 displayTransformUpdater:(id)a2 caDisplayQueue:(id)a3 assertion:(id)a4;
- (void)displayAssertion:(id)a0 didReceiveNewDeactivationReasons:(unsigned long long)a1 previousDeactivationReasons:(unsigned long long)a2;
- (void)displayAssertionDidGainControlOfDisplay:(id)a0 previousDeactivationReasons:(unsigned long long)a1;
- (void)endpoint:(id)a0 didChangeDisplayArrangementItem:(id)a1;
- (void)endpoint:(id)a0 didChangeDisplayConfigurationRequest:(id)a1;
- (void)endpoint:(id)a0 didChangeWantsControlOfDisplay:(BOOL)a1;
- (void)endpoint:(id)a0 modifyInitialSceneParameters:(id)a1;
- (id)initWithPriority:(unsigned long long)a0 descriptor:(id)a1 sceneSpecification:(id)a2 workspace:(id)a3;
- (void)transformDisplayConfigurationWithBuilder:(id)a0;

@end
