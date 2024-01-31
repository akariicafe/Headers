@class FBScene, NSString;

@interface SBInternalPerfPowerHUDSceneController : SBSystemUISceneController <SBFBacklightEnvironmentSceneProviding>

@property (nonatomic) BOOL registeredBacklightSceneProvider;
@property (weak, nonatomic) FBScene *backlightParticipantScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_setupInfo;

- (id)scenesForBacklightSession;
- (void)windowSceneDidDisconnect:(id)a0;
- (void).cxx_destruct;
- (void)windowSceneDidConnect:(id)a0;
- (void)_configureBacklightEnvironmentSceneProviderIfNecessary;
- (id)_newSceneControllerForWindowScene:(id)a0 sceneRequestOptions:(id)a1 traitsRole:(id)a2 level:(double)a3;

@end
