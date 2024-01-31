@class UIColor;

@interface MTShadowView : UIImageView {
    struct CGSize { double width; double height; } _maskSizeForCurrentImage;
}

@property (readonly, nonatomic) struct { float opacity; struct CGSize { double width; double height; } offset; double radius; } shadowAttributes;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } shadowOutsets;
@property (readonly, nonatomic) double maskCornerRadius;
@property (readonly, nonatomic) BOOL continuousCorners;
@property (copy, nonatomic) UIColor *shadowColor;

- (void)_dynamicUserInterfaceTraitDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameWithContentWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)didMoveToSuperview;
- (void)_updateShadowVisualStyling;
- (void)_updateShadowOutsetsIfNecessary;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithShadowAttributes:(struct { float x0; struct CGSize { double x0; double x1; } x1; double x2; })a0 maskCornerRadius:(double)a1 continuousCorners:(BOOL)a2;
- (id)initWithShadowAttributes:(struct { float x0; struct CGSize { double x0; double x1; } x1; double x2; })a0 maskCornerRadius:(double)a1;
- (void)_validateImage;

@end
