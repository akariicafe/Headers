@class OBLinkTrayButton, NSArray, OBTrayButton, NSString, NSLayoutConstraint;
@protocol HUConfigurationViewControllerDelegate;

@interface HUHomePersonalIdentityDeviceConfigurationViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource, HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController>

@property (retain, nonatomic) OBTrayButton *changeLanguageButton;
@property (retain, nonatomic) OBLinkTrayButton *cancelButton;
@property (retain, nonatomic) NSArray *mediaProfilesAndLanguageInfoList;
@property (nonatomic) long long selectedLanguageIndex;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_changeLanguage;
- (void)_cancelLanguageChange;
- (id)_configureTitleDescriptionContentViewForCell:(id)a0;
- (id)hu_preloadContent;
- (id)initWithMediaProfileAndLanguageInfo:(id)a0;
- (Class)onboardingFlowClass;

@end
