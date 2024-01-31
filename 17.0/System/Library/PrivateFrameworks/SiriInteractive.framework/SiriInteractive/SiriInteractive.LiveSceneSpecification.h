@class NSString;

@interface SiriInteractive.LiveSceneSpecification : UIApplicationSceneSpecification

@property (nonatomic, readonly) Class settingsClass;
@property (nonatomic, readonly) Class clientSettingsClass;
@property (nonatomic, readonly) NSString *uiSceneSessionRole;
@property (nonatomic, readonly) Class uiSceneMinimumClass;

- (id)init;

@end
