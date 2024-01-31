@class NSArray, UILayoutGuide, CPSActionsViewController, CPSAvatarViewController, CPSNameViewController, NSString;

@interface CPSContactEntityViewController : CPSBaseEntityContentViewController <CPSActionButtonLayoutDelegate>

@property (readonly, nonatomic) CPSAvatarViewController *avatarViewController;
@property (readonly, nonatomic) CPSNameViewController *nameViewController;
@property (readonly, nonatomic) CPSActionsViewController *actionsController;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (retain, nonatomic) UILayoutGuide *centeringLayoutGuide;
@property (retain, nonatomic) UILayoutGuide *avatarAndDetailsLayoutGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)resetLayoutConstraints;
- (void)setupLayoutConstraints;
- (void)setupLayoutGuides;
- (void)setupViewControllers;
- (id)personEntity;
- (void)configureButton:(id)a0;
- (BOOL)buttonsShouldFill;
- (void)didUpdateEntity:(id)a0;
- (id)initWithEntity:(id)a0 resourceProvider:(id)a1;

@end
