@class NSString, NSArray, PSSpecifier, NSTimer;

@interface CNFRegEmailController : CNFRegFirstRunController {
    PSSpecifier *_emailSpecifier;
    PSSpecifier *_actionGroupSpecifier;
    PSSpecifier *_currentActionSpecifier;
    NSArray *_checkMailSpecifiers;
    NSTimer *_validationTimeoutTimer;
    BOOL _validating;
}

@property (copy, nonatomic) NSString *pendingAlias;

- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (id)bundle;
- (void)viewDidLoad;
- (void)systemApplicationDidEnterBackground;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)systemApplicationWillEnterForeground;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (double)timeoutDuration;
- (void)_updateUI;
- (id)titleString;
- (id)logName;
- (id)aliasSpecifiers;
- (id)selectedAliases;
- (void)_buildActionGroupSpecifierCache:(id)a0;
- (void)_buildCheckMailSpecifierCache:(id)a0;
- (void)_buildEmailSpecifierCache:(id)a0;
- (void)_buildSpecifierCache:(id)a0;
- (id)_createSpecifierForAlias:(id)a0;
- (void)_failValidationWithError:(id)a0;
- (void)_finishValidation;
- (void)_handleValidationModeCancelled;
- (BOOL)_phoneNumberInAliases:(id)a0;
- (void)_refreshEnabledStateOfAliasSpecifiers;
- (void)_returnKeyPressed;
- (id)_rightButtonItem;
- (void)_setFieldsEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)_setupEventHandlers;
- (void)_showCheckMailButton:(BOOL)a0 animated:(BOOL)a1;
- (void)_stopValidationModeAnimated:(BOOL)a0;
- (void)_updateControllerState;
- (void)checkMailTapped:(id)a0;
- (void)emailFieldEmptyStateChanged:(id)a0 forSpecifier:(id)a1;
- (BOOL)emailFieldIsEmpty;
- (id)emailTextField;
- (void)nextTapped;
- (BOOL)onlyLocalPhoneNumberSentinelAliasIsSelected;
- (id)pendingAliasForSpecifier:(id)a0;
- (void)setAliasSelected:(id)a0;
- (void)setPendingAlias:(id)a0 forSpecifier:(id)a1;
- (BOOL)shouldShowAllVettedAliases;
- (BOOL)showActionSpecifier:(id)a0 animated:(BOOL)a1;
- (id)specifierList;
- (void)startValidationTimeoutTimer;
- (void)stopValidationTimeoutTimer;
- (void)validationTimeout:(id)a0;

@end
