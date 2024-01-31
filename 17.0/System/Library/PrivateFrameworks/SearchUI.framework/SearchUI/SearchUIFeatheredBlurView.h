@class MTMaterialView, UIView;

@interface SearchUIFeatheredBlurView : UIView

@property (retain) UIView *gradientView;
@property (retain) MTMaterialView *materialView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameForGradient;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
