@class NSString, NSLayoutConstraint, PKAccessoryView, UIView;

@interface PKPaletteContainerView : UIView <PKPaletteEdgeLocating, PKPaletteViewSizeScaling>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentViewLeftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentViewRightConstraint;
@property (retain, nonatomic) PKAccessoryView *accessoryView;
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewLeftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewRightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewHeightConstraint;
@property (nonatomic) unsigned long long edgeLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double scalingFactor;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_updateUI;
- (void)_installAccessoryView;
- (void)_installContentView;
- (BOOL)_wantsAcessoryViewHidden:(BOOL)a0;

@end
