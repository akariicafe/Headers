@class CCUIButtonModuleView, UIView;

@interface MRUVolumeStepperView : UIView

@property (retain, nonatomic) UIView *increaseMaterialView;
@property (retain, nonatomic) UIView *decreaseMaterialView;
@property (readonly, nonatomic) CCUIButtonModuleView *increaseButton;
@property (readonly, nonatomic) CCUIButtonModuleView *decreaseButton;
@property (nonatomic) double continuousButtonCornerRadius;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
