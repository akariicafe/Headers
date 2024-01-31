@class OBTrayButton, OBAnimationController, BKUIPeriocularSelectionCell, OBPrivacyLinkController, BKDevice, NSString;
@protocol UITraitChangeRegistration;

@interface BKUIPeriocularEnableSplashViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic) double maxCellHeight;
@property (retain, nonatomic) BKUIPeriocularSelectionCell *cellTop;
@property (retain, nonatomic) BKUIPeriocularSelectionCell *cellBottom;
@property (nonatomic) BOOL inBuddy;
@property (retain, nonatomic) OBTrayButton *skipButton;
@property (copy, nonatomic) id /* block */ endEnrollActionPrimary;
@property (copy, nonatomic) id /* block */ endEnrollActionSecondary;
@property (retain, nonatomic) OBTrayButton *continueButton;
@property (retain, nonatomic) BKDevice *device;
@property (nonatomic) BOOL upsell;
@property (retain, nonatomic) OBPrivacyLinkController *linkController;
@property (retain, nonatomic) OBAnimationController *animationController;
@property (copy, nonatomic) id /* block */ userSkippedAction;
@property (retain, nonatomic) id<UITraitChangeRegistration> traitChangeRegistration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setPeriocularFaceIDMatchEnabledForUserConfigurationWithDevice:(id)a0 credentialSet:(id)a1 authContext:(id)a2 enabled:(BOOL)a3 completion:(id /* block */)a4;
+ (void)setPeriocularFaceIDMatchEnabledForUserConfigurationWithDevice:(id)a0 credentialSet:(id)a1 enabled:(BOOL)a2;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (double)headerViewBottomToTableViewTopPadding;
- (void)_enrollSkipped:(id)a0;
- (void)_continuePressed:(id)a0;
- (id)_createCellForIndexPath:(id)a0;
- (void)_showPrivacyLink;
- (id)initInBuddy:(BOOL)a0 bkDevice:(id)a1 upsell:(BOOL)a2 withEndEnrollmentActionPrimary:(id /* block */)a3 enrollmentActionSecondary:(id /* block */)a4;

@end
