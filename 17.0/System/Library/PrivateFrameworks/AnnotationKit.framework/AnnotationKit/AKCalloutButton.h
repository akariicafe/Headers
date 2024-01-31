@class AKCalloutBar;

@interface AKCalloutButton : UIButton

@property (nonatomic) int position;
@property (weak, nonatomic) AKCalloutBar *bar;

- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
