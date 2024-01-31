@class UIGraphicsImageRenderer;

@interface _HKGraphViewOverlayView : UIImageView

@property (retain, nonatomic) UIGraphicsImageRenderer *imageRenderer;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_updateRendererSize:(struct CGSize { double x0; double x1; })a0;
- (void)drawContentUsingBlock:(id /* block */)a0;

@end
