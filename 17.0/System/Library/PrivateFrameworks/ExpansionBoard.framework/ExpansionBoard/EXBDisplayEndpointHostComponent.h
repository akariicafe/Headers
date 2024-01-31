@class Protocol, NSString, FBSDisplayConfigurationRequest, EXBDisplayArrangementItem;
@protocol EXBDisplayEndpointHostComponentDelegate;

@interface EXBDisplayEndpointHostComponent : FBSSceneComponent <EXBDisplayAssertionDelegate, FBSceneComponent> {
    int _configured;
}

@property (class, readonly, nonatomic) Protocol *settingsProtocol;

@property (readonly, nonatomic) BOOL wantsControlOfDisplay;
@property (readonly, copy, nonatomic) EXBDisplayArrangementItem *displayArrangementItem;
@property (readonly, copy, nonatomic) FBSDisplayConfigurationRequest *displayConfigurationRequest;
@property (weak, nonatomic) id<EXBDisplayEndpointHostComponentDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void).cxx_destruct;
- (void)displayAssertion:(id)a0 didLoseControlOfDisplayForDeactivationReasons:(unsigned long long)a1;
- (void)configureForDisplayConfiguration:(id)a0 priorityLevel:(unsigned long long)a1 deactivationReasons:(unsigned long long)a2;
- (void)displayAssertion:(id)a0 didReceiveNewDeactivationReasons:(unsigned long long)a1 previousDeactivationReasons:(unsigned long long)a2;
- (void)displayAssertionDidGainControlOfDisplay:(id)a0 previousDeactivationReasons:(unsigned long long)a1;
- (void)updateDisplayConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)updateRootWindow:(id)a0 completion:(id /* block */)a1;

@end
