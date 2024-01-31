@class HRElectrocardiogramSessionScreenView;

@interface HRElectrocardiogramSessionSimulationView : UIView

@property (readonly, nonatomic) HRElectrocardiogramSessionScreenView *screenView;
@property (nonatomic) double cornerRadius;
@property (readonly, nonatomic) BOOL isLargeDevice;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTimeRemaining:(double)a0;
- (void)_setUpUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isLargeDevice:(BOOL)a1;

@end
