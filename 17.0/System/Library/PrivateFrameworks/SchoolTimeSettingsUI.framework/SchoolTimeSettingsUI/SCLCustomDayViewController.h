@class SCLSettingsViewModel;
@protocol SCLCustomDayViewControllerDelegate;

@interface SCLCustomDayViewController : SCLListViewController

@property (readonly, nonatomic) SCLSettingsViewModel *viewModel;
@property (weak, nonatomic) id<SCLCustomDayViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)willMoveToParentViewController:(id)a0;
- (id)initWithViewModel:(id)a0 title:(id)a1;
- (void)loadSpecifierSource;

@end
