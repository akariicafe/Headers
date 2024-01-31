@class UIBarButtonItem;

@interface PTUISettingsController : UINavigationController

@property (retain, nonatomic) UIBarButtonItem *dismissButton;

- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_dismiss;
- (id)initWithRootSettings:(id)a0;
- (id)_defaultDismissButton;
- (id)_initWithRootModule:(id)a0;
- (void)_reloadWithRootModule:(id)a0;
- (id)initWithRootModuleController:(id)a0;

@end
