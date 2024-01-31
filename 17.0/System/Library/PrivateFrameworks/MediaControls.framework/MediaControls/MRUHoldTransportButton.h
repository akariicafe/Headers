@class NSTimer;

@interface MRUHoldTransportButton : MRUTransportButton

@property (retain, nonatomic) NSTimer *animationTimer;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTransportControlItem:(id)a0;
- (void).cxx_destruct;
- (void)didSelect:(id)a0;
- (void)beganHold:(id)a0;
- (void)releasedHold:(id)a0;

@end
