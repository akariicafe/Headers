@interface AMUIAmbientPresentationSceneClientComponent : FBSSceneComponent

@property (nonatomic, getter=isAmbientPresented) BOOL ambientPresented;
@property (nonatomic) long long ambientDisplayStyle;

- (void)dealloc;
- (void)setScene:(id)a0;
- (void)_sceneWillConnect:(id)a0;
- (void)scene:(id)a0 didUpdateSettings:(id)a1;
- (long long)_ambientDisplayStyleForScene:(id)a0;
- (BOOL)_isAmbientPresentedForScene:(id)a0;
- (void)_updateAmbientTraitsForWindowScene:(id)a0;

@end
