@class CALayer, NSLayoutConstraint, UIView, SLReplicatorView;

@interface SLHighlightPillMarqueeView : UIView

@property (retain, nonatomic) UIView *pillView;
@property (retain, nonatomic) SLReplicatorView *replicatorView;
@property (nonatomic) BOOL marqueeAnimationIsActive;
@property (nonatomic) BOOL endingPositionConstraintsShouldBeActive;
@property (retain, nonatomic) NSLayoutConstraint *ourWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *ourHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *replicatorViewStartingPositionXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *replicatorViewEndingPositionXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *replicatorViewYConstraint;
@property (retain, nonatomic) CALayer *maskLayer;
@property (nonatomic) BOOL marqueeEnabled;
@property (nonatomic) double marqueeClippingWidth;
@property (nonatomic) long long replicatedContentAlignment;

- (void)updateConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_activateMarqueeAnimationIfNecessary;
- (void)_deactivateMarqueeAnimationIfNecessary;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pillView:(id)a1;

@end
