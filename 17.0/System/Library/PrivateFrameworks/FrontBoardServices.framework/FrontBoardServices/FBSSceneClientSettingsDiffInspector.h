@interface FBSSceneClientSettingsDiffInspector : FBSSettingsDiffInspector

+ (void)initialize;

- (void)observeLayersWithBlock:(id /* block */)a0;
- (void)observeOcclusionsWithBlock:(id /* block */)a0;
- (void)observePreferredSceneHostIdentifierWithBlock:(id /* block */)a0;
- (void)observePreferredSceneHostIdentityWithBlock:(id /* block */)a0;
- (void)observePreferredLevelWithBlock:(id /* block */)a0;
- (void)observePreferredInterfaceOrientationWithBlock:(id /* block */)a0;

@end
