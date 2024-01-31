@class _UILegibilitySettings, NSArray, NSString, UITableView, UIView, NSLayoutConstraint, UIButton;

@interface SBActivationInfoViewController : UIViewController <STTelephonyStateObserver, UITableViewDataSource, UITableViewDelegate> {
    NSString *_meid;
    NSString *_serial;
    NSArray *_mobileSubscriptionInfo;
    UIView *_containerView;
    UITableView *_activationInfoTableView;
    NSLayoutConstraint *_activationInfoTableViewHeight;
}

@property (retain, nonatomic) NSArray *mobileEquipmentInfo;
@property (readonly, nonatomic) UIButton *regulatoryInfoButton;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)mobileEquipmentInfoDidChangeForStateProvider:(id)a0 slot:(long long)a1;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)subscriptionInfoDidChangeForStateProvider:(id)a0 slot:(long long)a1;
- (void).cxx_destruct;
- (id)_titleForHeaderInSection:(long long)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)_formattedIMEI:(id)a0;
- (id)_activationInfoCell;
- (id)_backgroundViewForHeaderView:(id)a0;
- (id)_formattedCSN:(id)a0;
- (id)_formattedICCID:(id)a0;
- (id)_formattedString:(id)a0 withSpaceAfterDigits:(unsigned long long)a1;
- (id)_processDeviceInfo;
- (id)_processMobileEquipmentInfo:(id)a0;
- (id)_processMobileSubscriptionInfo;
- (void)_telephonyStateChanged;
- (void)_updateMobileEquipmentInfo;

@end
