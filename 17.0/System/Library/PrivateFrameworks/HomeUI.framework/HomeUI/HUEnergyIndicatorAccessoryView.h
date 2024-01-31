@class NSMutableArray, UIView;

@interface HUEnergyIndicatorAccessoryView : UIView

@property (retain, nonatomic) UIView *energyIndicatorView;
@property (retain, nonatomic) NSMutableArray *constraints;

- (void)updateConstraints;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithEnergyIndicator:(id)a0;

@end
