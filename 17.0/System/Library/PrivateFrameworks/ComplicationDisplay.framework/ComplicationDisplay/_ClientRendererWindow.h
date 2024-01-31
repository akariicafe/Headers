@interface _ClientRendererWindow : UIWindow

+ (BOOL)_isSecure;

- (BOOL)_isWindowServerHostingManaged;
- (BOOL)_wantsSceneAssociation;
- (id)init;
- (BOOL)_alwaysGetsContexts;
- (long long)_orientationForRootTransform;
- (long long)_orientationForViewTransform;
- (BOOL)_shouldUseRemoteContext;

@end
