@class OBBoldTrayButton, NSSet, NSString, UIBarButtonItem;
@protocol HUConfigurationViewControllerDelegate;

@interface HUHomeHubSharedHomeWarningViewController : HUItemTableOBWelcomeController <HUConfigurationViewControllerFlow, HFItemManagerDelegate, HUConfigurationViewController>

@property (retain, nonatomic) OBBoldTrayButton *commitButton;
@property (retain, nonatomic) NSSet *homes;
@property (retain, nonatomic) UIBarButtonItem *cancelButton;
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
- (id)initWithSharedHomes:(id)a0;
- (Class)onboardingFlowClass;

@end
