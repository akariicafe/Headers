@interface SBUISystemApertureSceneSpecification : UIApplicationSceneSpecification

- (BOOL)isInternal;
- (BOOL)affectsAppLifecycleIfInternal;
- (BOOL)allowsConfigurationByAppDelegate;
- (id)baseSceneComponentClassDictionary;
- (id)uiSceneSessionRole;

@end
