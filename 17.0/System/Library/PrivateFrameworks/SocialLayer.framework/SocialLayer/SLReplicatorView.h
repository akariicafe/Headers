@class NSLayoutConstraint, UIView;

@interface SLReplicatorView : UIView

@property (retain, nonatomic) UIView *targetView;
@property (nonatomic) long long instanceCount;
@property (nonatomic) double replicationPaddingX;
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *targetViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *targetViewTopConstraint;

+ (Class)layerClass;

- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_updateReplicatorLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 targetView:(id)a1;
- (void)updateInstanceCount:(unsigned long long)a0 replicationPaddingX:(double)a1;

@end
