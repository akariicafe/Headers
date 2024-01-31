@class UIView, MTMaterialView;

@interface SBShelfBackgroundView : UIView {
    MTMaterialView *_backgroundView;
    UIView *_backgroundMaskView;
    UIView *_backgroundMaskInnerRectangleView;
}

@property (nonatomic) double weighting;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } extendedBlurRect;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
