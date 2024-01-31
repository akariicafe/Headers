@class NSTimer, NSString, OBLinkTrayButton, NSArray, OBTrayButton, NSLayoutConstraint, UIActivityIndicatorView, NAFuture;
@protocol HUConfigurationViewControllerDelegate;

@interface HUHomeAssistantDeviceLanguageConfigurationViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource, HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController>

@property (retain, nonatomic) OBTrayButton *changeLanguageButton;
@property (retain, nonatomic) OBLinkTrayButton *cancelButton;
@property (retain, nonatomic) NSArray *supportedVoiceRecognitionLanguages;
@property (retain, nonatomic) NSArray *languageMismatchedHomeAssistantDevices;
@property (nonatomic) long long selectedLanguageIndex;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchor;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) NAFuture *changeLanguageFuture;
@property (retain, nonatomic) NSTimer *changeLanguageTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_showSpinner;
- (void)_changeLanguage;
- (void)_cancelLanguageChange;
- (id)_configureTitleDescriptionContentViewForCell:(id)a0;
- (void)_hideSpinner;
- (id)hu_preloadContent;
- (id)initWithSupportedVoiceRecognitionLanguages:(id)a0 languageMismatchedHomeAssistantDevices:(id)a1;
- (Class)onboardingFlowClass;

@end
