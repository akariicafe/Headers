@class SBApplication, FBSDisplayConfiguration, UISApplicationInitializationContext;
@protocol SBApplicationSupportServiceRequestSceneIdentityTokenProvider, SBApplicationSceneIdentityProviding, SBApplicationSupportServiceRequestPersistenceIdentifierProvider;

@interface SBApplicationSupportServiceRequestContext : NSObject {
    BOOL _hostIsSpringBoard;
    SBApplication *_app;
    SBApplication *_hostApp;
    SBApplication *_extensionContainingApp;
    UISApplicationInitializationContext *_applicationInitializationContext;
    FBSDisplayConfiguration *_launchDisplayConfiguration;
    id<SBApplicationSupportServiceRequestPersistenceIdentifierProvider> _preferredAppPersistenceIDProvider;
    id<SBApplicationSceneIdentityProviding> _preferredAppSceneIdentityProvider;
    id<SBApplicationSupportServiceRequestSceneIdentityTokenProvider> _preferredSceneIdentityTokenProvider;
}

@property (readonly, nonatomic) UISApplicationInitializationContext *applicationInitializationContext;

+ (id)hostingApplicationBundleIDForPid:(int)a0;
+ (id)initializationContextForClient:(id)a0;
+ (BOOL)shouldOverrideClientInitialization:(id)a0;
+ (id)_hostProcessForProcess:(id)a0;

- (id)initWithApplication:(id)a0 launchDisplayConfiguration:(id)a1 persistenceIdentifierProvider:(id)a2 sceneIdentityProvider:(id)a3 sceneIdentityTokenProvider:(id)a4;
- (long long)_main_effectiveClassicMode;
- (id)_main_appSceneIdentityProvider;
- (id)_main_embeddedDisplayContext;
- (id)_main_launchDisplayContext;
- (id)_main_appPersistenceIDProvider;
- (id)initWithClient:(id)a0 host:(id)a1;
- (void)_main_applyClassicModeLiesIfNecessaryToDisplayContext:(id)a0;
- (void).cxx_destruct;
- (id)_main_effectiveApplicationForCompatibility;
- (id)_main_displayContextForDisplayConfiguration:(id)a0;
- (unsigned long long)_main_effectiveScreenType;
- (id)_main_applicationInitializationContext;
- (id)_main_deviceContext;
- (id)_main_sceneIdentityTokenProvider;
- (id)_main_persistenceIDs;
- (id)initWithApplication:(id)a0 launchDisplayConfiguration:(id)a1;

@end
