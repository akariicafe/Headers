@class UIAlertController;

@interface _UIAlertControllerShimPresenterWindow : UIApplicationRotationFollowingWindow {
    UIAlertController *_alertController;
}

@property (readonly, retain, nonatomic) UIAlertController *alertController;

- (id)initWithWindowScene:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_presentationViewController;
- (void)presentAlertController:(id)a0 animated:(BOOL)a1 completionBlock:(id /* block */)a2;

@end
