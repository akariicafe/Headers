@class UILabel, PXPeopleScalableAvatarView, NSLayoutConstraint;
@protocol PXPeopleSummaryDelegate, PXPerson;

@interface PXPeopleConfirmationSummaryViewController : UIViewController

@property (readonly, nonatomic) NSLayoutConstraint *labelSpacingConstraint;
@property (readonly, nonatomic) UILabel *summaryLabel;
@property (readonly, nonatomic) PXPeopleScalableAvatarView *avatarView;
@property (readonly, nonatomic) id<PXPerson> person;
@property (readonly, weak, nonatomic) id<PXPeopleSummaryDelegate> delegate;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)traitEnvironment:(id)a0 didChangeTraitCollection:(id)a1;
- (void)_updateDynamicTypeSpacing;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;

@end
