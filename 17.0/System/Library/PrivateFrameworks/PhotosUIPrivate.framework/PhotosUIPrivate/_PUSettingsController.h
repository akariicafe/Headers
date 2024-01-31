@class UINavigationController, PTSettings, PXToast, NSString, PXSettings;

@interface _PUSettingsController : PTUISettingsController <PTSettingsKeyPathObserver>

@property (readonly, nonatomic) UINavigationController *searchNavigationController;
@property (readonly, nonatomic) UINavigationController *configurationsNavigationController;
@property (nonatomic) BOOL hasWarnedForOverrides;
@property (readonly, nonatomic) PTSettings *rootSettings;
@property (readonly, nonatomic) PXSettings *currentSettings;
@property (copy, nonatomic) id /* block */ onViewDidDisappearBlock;
@property (copy, nonatomic) id /* block */ dismissButtonFactory;
@property (copy, nonatomic) id /* block */ ellipsisBarButtonItemFactory;
@property (retain, nonatomic) PXToast *toast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithRootSettings:(id)a0;
- (void)_clearSettingsOverride;
- (void)_hideToast;
- (void)_invalidateNavigationItems;
- (void)_showReminderToQuitAfterChange;
- (void)_updateNavigationItemOfViewController:(id)a0;
- (void)_warnForSettingsOverride;
- (void)callOnViewDidDisappearBlock;
- (void)handleEllipsisBarButtonItem:(id)a0;

@end
