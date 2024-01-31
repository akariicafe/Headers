@class UIWindowScene, UIScene, NSString, _UIBannerWindow, _UIBannerContainerView;

@interface _UIBannerManager : NSObject <_UISceneComponentProviding>

@property (retain, nonatomic) UIWindowScene *windowScene;
@property (retain, nonatomic) _UIBannerWindow *window;
@property (retain, nonatomic) _UIBannerContainerView *containerView;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
