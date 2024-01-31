@class UISCompatibilityContext, NSSet, UISDisplayContext, UISDeviceContext, FBSSceneIdentityToken;

@interface UISMutableApplicationInitializationContext : UISApplicationInitializationContext

@property (retain, nonatomic) UISDisplayContext *displayContext;
@property (retain, nonatomic) UISDisplayContext *mainDisplayContext;
@property (retain, nonatomic) UISDisplayContext *launchDisplayContext;
@property (retain, nonatomic) UISDeviceContext *deviceContext;
@property (retain, nonatomic) UISCompatibilityContext *compatibilityContext;
@property (retain, nonatomic) NSSet *persistedSceneIdentifiers;
@property (retain, nonatomic) FBSSceneIdentityToken *defaultSceneToken;
@property (nonatomic) BOOL supportAppSceneRequests;

- (void)setDeviceContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDisplayContext:(id)a0;
- (void)setCompatibilityContext:(id)a0;
- (void)setDefaultSceneToken:(id)a0;
- (void)setLaunchDisplayContext:(id)a0;
- (void)setMainDisplayContext:(id)a0;
- (void)setPersistedSceneIdentifiers:(id)a0;
- (void)setSupportAppSceneRequests:(BOOL)a0;

@end
