@class UIColor, NSTimer, CADisplayLink;
@protocol MFProgressViewDelegate;

@interface MFProgressView : UIView {
    double _stroke;
    double _diameter;
    CADisplayLink *_displayLink;
    double _displayedProgress;
    double _targetProgress;
    NSTimer *_simulateActivityTimer;
}

@property (weak, nonatomic) id<MFProgressViewDelegate> delegate;
@property (retain, nonatomic) UIColor *tintColor;

+ (id)progressViewWithDefaultStyleStrokeAndRect;

- (void)_onDisplayLink:(id)a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setProgress:(double)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_invalidateDisplayLink;
- (void)_adjustProgress;
- (void)_drawCircleWithCenter:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1;
- (void)_drawProgressInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_drawWedgeWithCenter:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1;
- (void)_invalidateSimulationTimer;
- (BOOL)_isValidCenter:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_stopSimulationIfCompleted;
- (id)initWithProgressViewStyle:(int)a0 stroke:(double)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)progressDidFinish;
- (void)simulateActivity;

@end
