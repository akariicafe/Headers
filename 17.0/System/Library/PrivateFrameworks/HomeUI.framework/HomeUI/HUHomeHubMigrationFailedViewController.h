@class OBBoldTrayButton, NSString;
@protocol HUConfigurationViewControllerDelegate;

@interface HUHomeHubMigrationFailedViewController : HUImageOBWelcomeController <HUConfigurationViewController>

@property (retain, nonatomic) OBBoldTrayButton *commitButton;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_doneAction:(id)a0;
- (BOOL)_limitToNonScrollingContentHeight;
- (id)initWithDetailText:(id)a0;
- (Class)onboardingFlowClass;

@end
