@class UIScene, NSString, ASOOverlayViewController, ASOOverlayWindow;

@interface ASOOverlayManager : NSObject <_UISceneComponentProviding>

@property (readonly, retain, nonatomic) ASOOverlayWindow *window;
@property (retain, nonatomic) ASOOverlayViewController *viewController;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWindowScene:(id)a0;
- (id)initWithScene:(id)a0;
- (void).cxx_destruct;
- (void)presentOverlay:(id)a0;
- (void)dismissOverlay;
- (void)didFinishDismissingOverlay;
- (id)makeViewControllerIfNeeded;
- (void)willStartPresentingOverlay;

@end
