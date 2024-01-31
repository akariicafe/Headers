@class NSString, STNotificationSettingsGateway, PSRootController, STPINListViewController, STDebouncer, PSSpecifier, NSObject, NSLayoutConstraint, STDatePickerBar, UIViewController;
@protocol STRootViewModelCoordinator, STScreenTimeReportFiltering, PSController;

@interface STScreenTimeReportController : UIViewController <STDebouncerDelegate, STAllowanceDetailListControllerDelegate, PSController> {
    UIViewController<PSController> *_parentController;
    PSRootController *_rootController;
    PSSpecifier *_specifier;
}

@property (readonly) UIViewController<STScreenTimeReportFiltering> *reportViewController;
@property (readonly) NSString *context;
@property (readonly) STPINListViewController *pinControllerDelegate;
@property (readonly) STDatePickerBar *datePickerBar;
@property (getter=isDatePickerHidden) BOOL datePickerHidden;
@property (readonly) STDebouncer *datePickerHiddenDebouncer;
@property (retain) NSLayoutConstraint *datePickerTopConstraint;
@property (retain) NSLayoutConstraint *datePickerBottomConstraint;
@property (readonly, nonatomic) STNotificationSettingsGateway *notificationSettingsGateway;
@property (retain, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (id)specifier;
- (void)setSpecifier:(id)a0;
- (void)setRootController:(id)a0;
- (id)rootController;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setParentController:(id)a0;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (id)parentController;
- (void)showController:(id)a0;
- (BOOL)canBeShownFromSuspendedState;
- (id)readPreferenceValue:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void)debouncer:(id)a0 didDebounce:(id)a1;
- (void)_didTapBarMark:(id)a0;
- (void)_dateModeDidChange:(id)a0;
- (void)_dateModePickerDidAppear:(id)a0;
- (void)_dateModePickerDidDisappear:(id)a0;
- (void)_devicesDidChangeFrom:(id)a0 to:(id)a1;
- (void)_didPressAddApplicationLimitButton:(id)a0;
- (void)_didPressAddCategoryLimitButton:(id)a0;
- (void)_didPressAddWebDomainLimitButton:(id)a0;
- (void)_didTapApplicationLink:(id)a0;
- (void)_didTapCategoryLink:(id)a0;
- (void)_didTapEditLimitLink:(id)a0;
- (void)_didTapNotificationsLink:(id)a0;
- (void)_didTapPickupsLink:(id)a0;
- (void)_didTapWebDomainLink:(id)a0;
- (void)_editLimit:(id)a0 isNewLimit:(BOOL)a1;
- (void)_selectedCoreDuetIdentifierDidChange:(id)a0;
- (void)_selectedUsageReportDidChangeFrom:(id)a0 to:(id)a1;
- (void)allowanceDetailController:(id)a0 didDeleteAllowance:(id)a1;
- (void)allowanceDetailController:(id)a0 didSaveAllowance:(id)a1;
- (void)allowanceDetailControllerDidCancel:(id)a0;
- (id)initWithTitle:(id)a0 coordinator:(id)a1 context:(id)a2 pinControllerDelegate:(id)a3;

@end
