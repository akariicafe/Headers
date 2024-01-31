@class UIView, UIControl;

@interface _MKSmallCalloutPassthroughButton : UIControl {
    UIView *_highlightView;
}

@property (retain, nonatomic) UIControl *targetControl;

- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)handleTap:(id)a0;

@end
