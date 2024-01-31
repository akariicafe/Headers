@class OBBoldTrayButton, NSString, UIBarButtonItem;
@protocol HUConfigurationViewControllerDelegate;

@interface HUHomeHubSharedUserWarningViewController : HUItemTableOBWelcomeController <HUConfigurationViewControllerFlow, HFItemManagerDelegate, HUConfigurationViewController>

@property (retain, nonatomic) OBBoldTrayButton *commitButton;
@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (retain, nonatomic) NSString *captionString;
@property (retain, nonatomic) NSString *confirmationString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_cancelFlow:(id)a0;
- (void)_commitOrContinue;
- (id)_commitOrContinueButtonTitle;
- (void)_continueTapped:(id)a0;
- (void)_presentConfirmationAlert;
- (id)initWithHomesToUsersMap:(id)a0;
- (Class)onboardingFlowClass;

@end
