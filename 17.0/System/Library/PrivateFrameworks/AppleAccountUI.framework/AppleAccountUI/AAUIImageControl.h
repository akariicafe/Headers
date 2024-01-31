@class UIImageView, AAUILabel, UIView;

@interface AAUIImageControl : UIControl {
    UIView *_overlayView;
}

@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) AAUILabel *label;

- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void)_updateLabelVisibility;
- (void).cxx_destruct;
- (void)_updateOverlayViewVisibility;
- (id)initWithCoder:(id)a0;

@end
