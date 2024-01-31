@interface SBSUIStarkNotificationsSceneSpecification : UIApplicationStarkSceneSpecification

- (BOOL)isInternal;
- (Class)clientSettingsClass;
- (BOOL)isUIKitManaged;
- (Class)settingsClass;
- (Class)transitionContextClass;
- (id)baseActionHandlers;
- (id)baseSettingsDiffActions;

@end
