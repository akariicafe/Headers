@class NSLayoutConstraint;

@interface _UIContentConstraintsLayoutGuide : UILayoutGuide

@property (readonly, nonatomic) NSLayoutConstraint *leadingConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *trailingConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *topConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (readonly, nonatomic) BOOL wantsMaximumSizeConstraintsActive;
@property (readonly, nonatomic) NSLayoutConstraint *maximumWidthConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *maximumHeightConstraint;
@property (readonly, nonatomic) BOOL wantsMinimumSizeConstraintsActive;
@property (readonly, nonatomic) NSLayoutConstraint *minimumWidthConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *minimumHeightConstraint;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) struct CGSize { double width; double height; } maximumSize;
@property (nonatomic) struct CGSize { double width; double height; } minimumSize;

- (id)init;
- (void)setOwningView:(id)a0;
- (void).cxx_destruct;
- (void)_setAllMarginConstraintsActive:(BOOL)a0;
- (id)_allMarginConstraints;
- (id)_allSizeConstraints;
- (void)_clearConstraints;
- (void)_setAllSizeConstraintsActive:(BOOL)a0;
- (void)_updateAllMarginConstraintConstants;
- (void)_updateAllSizeConstraints;

@end
