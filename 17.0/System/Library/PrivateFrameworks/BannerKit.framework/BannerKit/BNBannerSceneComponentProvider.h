@class UIWindow, UIScene, NSString, BNBannerClientContainerViewController;
@protocol BNBannerSceneComponentProviderDelegate;

@interface BNBannerSceneComponentProvider : NSObject <_UISceneComponentProviding>

@property (weak, nonatomic) id<BNBannerSceneComponentProviderDelegate> delegate;
@property (readonly, nonatomic) UIWindow *sceneWindow;
@property (readonly, nonatomic) BNBannerClientContainerViewController *containerViewController;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)delegateAssociatedWithSceneForPresentableWithUniqueIdentifier:(id)a0;
+ (void)registerDelegate:(id)a0 forSceneForPresentableWithUniqueIdentifier:(id)a1;
+ (void)unregisterDelegateForSceneForPresentableWithUniqueIdentifier:(id)a0;

- (void)_sceneWillInvalidate:(id)a0;
- (id)_settingsDiffActionsForScene:(id)a0;
- (id)initWithScene:(id)a0;
- (id)_actionRespondersForScene:(id)a0;
- (void).cxx_destruct;
- (id)_newSceneWindowWithRootViewController:(id)a0;

@end
