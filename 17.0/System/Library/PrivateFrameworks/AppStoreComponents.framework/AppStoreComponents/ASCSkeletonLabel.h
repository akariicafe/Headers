@class UIColor, ASCContentSkeleton;

@interface ASCSkeletonLabel : UILabel

@property (readonly, nonatomic) long long effectiveSkeletonAlignment;
@property (nonatomic) BOOL wantsAncestorFocusMarqueeAfterClearingSkeleton;
@property (copy, nonatomic) UIColor *skeletonColor;
@property (copy, nonatomic) ASCContentSkeleton *skeleton;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (double)_baselineOffsetFromBottom;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_firstBaselineOffsetFromTop;
- (void)drawSkeletonInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })skeletonRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
