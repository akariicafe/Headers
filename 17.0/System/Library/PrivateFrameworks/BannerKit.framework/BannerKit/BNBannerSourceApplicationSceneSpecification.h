@interface BNBannerSourceApplicationSceneSpecification : UIApplicationSceneSpecification

- (BOOL)isInternal;
- (BOOL)affectsAppLifecycleIfInternal;
- (id)baseSceneComponentClassDictionary;
- (Class)clientSettingsClass;
- (Class)settingsClass;
- (id)uiSceneSessionRole;

@end
