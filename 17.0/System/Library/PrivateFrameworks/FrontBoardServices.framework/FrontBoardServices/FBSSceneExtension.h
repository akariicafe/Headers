@interface FBSSceneExtension : NSObject

+ (id)alloc;
+ (void)initialize;
+ (id)clientComponents;
+ (id)clientSettingsExtensions;
+ (id)hostComponents;
+ (id)settingsExtensions;
+ (id)transitionContextExtensions;
+ (BOOL)softLinkExtensionFrameworkInClient;

@end
