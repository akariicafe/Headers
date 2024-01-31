@class UIViewController;

@interface _UIUserDefaultsHostActivity : _UIUserDefaultsActivity

@property (retain, nonatomic) UIViewController *presentableActivityViewController;

- (void)_cleanup;
- (void).cxx_destruct;
- (id)activityViewController;
- (void)_prepareActivityViewControllerIfNeeded;
- (void)_settingsViewControllerDidDismiss:(id)a0;
- (void)activityDidFinish:(BOOL)a0 items:(id)a1 error:(id)a2;

@end
