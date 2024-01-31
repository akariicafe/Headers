@class NSLayoutConstraint, UIView;

@interface HUPCCenterFillContentController : HUPCFullCenterContentViewController

@property (readonly, nonatomic) UIView *contentViewContainer;
@property (readonly, nonatomic) NSLayoutConstraint *contentViewContainerHeightConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *contentViewContainerWidthConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *contentViewTopConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *contentViewLeadingConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *contentViewTrailingConstraint;
@property (readonly, nonatomic) UIView *centerFillContentView;
@property (nonatomic) unsigned long long contentMode;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (double)_contentAspectRatio;
- (void)_updateContentViewContainerConstraints;
- (void)_updateContentViewInsetConstraints;
- (void)_viewDidUpdateContent;
- (id)initWithTitle:(id)a0 detailText:(id)a1 contentView:(id)a2;

@end
