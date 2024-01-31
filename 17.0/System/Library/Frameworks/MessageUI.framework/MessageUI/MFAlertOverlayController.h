@class UIAlertController, UIWindow, UIWindowScene;

@interface MFAlertOverlayController : NSObject

@property (retain, nonatomic) UIWindow *overlayWindow;
@property (readonly, weak, nonatomic) UIWindowScene *scene;
@property (readonly, nonatomic) BOOL isPresentingAlert;
@property (readonly, nonatomic) UIAlertController *topmostPresentedAlert;

+ (id)log;

- (id)initWithWindowScene:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)presentAlertController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)_bottomPresentedAlert;
- (void)_handlePresentationDismissalNotification:(id)a0;
- (void)_setupOverlayWindowWithScene:(id)a0;
- (void)_teardownOverlayWindow;
- (id)_topmostViewController;

@end
