@class UIColor, NSArray, PSSpecifier, STAllowance, NSString, NSObject;
@protocol STRootViewModelCoordinator, STAllowanceDetailListControllerDelegate;

@interface STAllowanceDetailListController : PSListController <PSDateTimePickerCellDelegate, STCustomizeDaysListControllerDelegate>

@property (retain, nonatomic) PSSpecifier *timeGroupSpecifier;
@property (retain, nonatomic) PSSpecifier *timeSpecifier;
@property (retain, nonatomic) PSSpecifier *timePickerSpecifier;
@property (retain, nonatomic) PSSpecifier *customizeDaysSpecifier;
@property (retain, nonatomic) PSSpecifier *selectedTimeSpecifier;
@property (retain, nonatomic) NSArray *budgetedItemSpecifiers;
@property BOOL didDeleteAllowance;
@property (retain, nonatomic) UIColor *defaultTimeCellDetailTextColor;
@property (weak, nonatomic) id<STAllowanceDetailListControllerDelegate> delegate;
@property (copy, nonatomic) STAllowance *allowance;
@property (nonatomic) BOOL isSetupController;
@property BOOL useBackButton;
@property (nonatomic) BOOL creatingNewAllowance;
@property (readonly, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willResignActive;
- (BOOL)shouldReloadSpecifiersOnResume;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)loadView;
- (id)specifiers;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithCoordinator:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (long long)tableViewStyle;
- (BOOL)canBeShownFromSuspendedState;
- (void)cancelButtonTapped:(id)a0;
- (void)datePickerChanged:(id)a0;
- (id)datePickerForSpecifier:(id)a0;
- (void)_setAllowanceEnabled:(id)a0 specifier:(id)a1;
- (id)_allowanceEnabled:(id)a0;
- (id)_askForMoreTime:(id)a0;
- (id)_categoryDetailText:(id)a0;
- (void)_editListButtonPressed:(id)a0;
- (void)_setAskForMoreTime:(id)a0 specifier:(id)a1;
- (void)_showOrHidePickerSpecifierForSpecifier:(id)a0 highlight:(BOOL)a1;
- (id)atEndOfLimitFooterText;
- (id)budgetTime;
- (void)confirmDeletion:(id)a0;
- (id)createBudgetedItemSpecifiers;
- (void)customizeDaysListController:(id)a0 didFinishEditingTimeByDay:(id)a1;
- (void)deleteAllowance:(id)a0;
- (BOOL)hasSetBudgetTime;
- (BOOL)hasSetBudgetTimeOrCustomSchedule;
- (void)saveButtonTapped:(id)a0;
- (void)showCustomizeDaysController:(id)a0;
- (void)showOrHideCustomizeDaysSpecifier;
- (id)timeFooterText;
- (void)updateSaveButton;

@end
