@class SBDisplayAssertion, NSString, SBSceneManager, FBSceneManager, FBSDisplayConfiguration, SBAppSwitcherDefaults, FBScene;

@interface SBSystemShellEmbeddedDisplayController : NSObject <SBDisplayControlling, SBDisplayControllerProviding> {
    SBAppSwitcherDefaults *_appSwitcherDefaults;
    FBSceneManager *_sceneManager;
    SBSceneManager *_sbSceneManager;
    FBScene *_scene;
    FBSDisplayConfiguration *_displayConfiguration;
    long long _initialOrientation;
    SBDisplayAssertion *_displayAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)displayControllerInfoForConnectingDisplay:(id)a0 configuration:(id)a1;
- (void).cxx_destruct;
- (void)displayAssertion:(id)a0 didLoseControlOfDisplayForDeactivationReasons:(unsigned long long)a1;
- (id)_createSystemShellSceneWithOrientation:(long long)a0;
- (void)_updateDisplayAssertionPreferences;
- (void)_updateSceneSettings;
- (void)connectToDisplayIdentity:(id)a0 configuration:(id)a1 displayManager:(id)a2 sceneManager:(id)a3 caDisplayQueue:(id)a4 assertion:(id)a5;
- (void)displayAssertion:(id)a0 didReceiveNewDeactivationReasons:(unsigned long long)a1;
- (void)displayAssertionDidGainControlOfDisplay:(id)a0;
- (void)displayAssertionDidInvalidate:(id)a0;
- (void)displayIdentityDidDisconnect:(id)a0;
- (void)displayIdentityDidUpdate:(id)a0 configuration:(id)a1;
- (id)initWithAppSwitcherDefaults:(id)a0 sceneManager:(id)a1 initialOrientation:(long long)a2;

@end
