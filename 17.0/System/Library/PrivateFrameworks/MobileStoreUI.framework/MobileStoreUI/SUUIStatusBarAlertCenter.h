@class _SUUIStatusBarAlertViewController, NSString, _SUUIClickThroughWindow;

@interface SUUIStatusBarAlertCenter : NSObject <_SUUIStatusBarAlertViewControllerDelegate>

@property (readonly, nonatomic) _SUUIClickThroughWindow *window;
@property (readonly, nonatomic) _SUUIStatusBarAlertViewController *rootViewController;
@property (nonatomic) double duration;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCenter;

- (void)dismiss;
- (id)init;
- (void).cxx_destruct;
- (void)scheduleDismiss;
- (void)showMessage:(id)a0 withStyle:(long long)a1 forDuration:(double)a2 actionBlock:(id /* block */)a3;
- (void)statusBarAlertViewControllerWasTapped:(id)a0;
- (void)unscheduleDismiss;

@end
