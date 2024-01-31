@class UIView, MTMaterialView;

@interface AFUIPasscodeBlurView : UIView

@property (retain, nonatomic) MTMaterialView *materialView;
@property (retain, nonatomic) UIView *lightenSourceOverView;
@property (retain, nonatomic) UIView *plusDView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setPlusDBackgroundColorWithWeighting:(double)a0;

@end
