@class PKSupply, UIView;

@interface UIPrintSupplyLevelView : UIView

@property (retain, nonatomic) PKSupply *supplyInfo;
@property (retain, nonatomic) UIView *lowSupplyImageView;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 supplyInfo:(id)a1;
- (BOOL)supplyLevelShowWarning;

@end
