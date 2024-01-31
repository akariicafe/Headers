@class UILabel, PXPeopleBootstrapContext, NSString;
@protocol PXPeopleFlowViewControllerActionDelegate, PXPeoplePickerConfigurationControllerDelegate;

@interface PXPeopleBootstrapSummaryViewController : UIViewController <PXPeopleFlowViewController>

@property (readonly, weak, nonatomic) UILabel *promptLabel;
@property (readonly, weak, nonatomic) UILabel *descriptionLabel;
@property (nonatomic) BOOL useLowMemoryMode;
@property (weak, nonatomic) id<PXPeoplePickerConfigurationControllerDelegate> configControllerDelegate;
@property (readonly, nonatomic) PXPeopleBootstrapContext *bootstrapContext;
@property (readonly, nonatomic) BOOL wantsCancelButton;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredSize;
@property (weak, nonatomic) id<PXPeopleFlowViewControllerActionDelegate> actionDelegate;
@property (readonly, nonatomic) BOOL shouldConfirmAdvancement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (id)initWithContext:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateUI;
- (id)_localizedDescriptionString;
- (id)_localizedPromptString;
- (id)_localizedTitleString;
- (void)_updateNavigationBarForCurrentTraitCollection;

@end
