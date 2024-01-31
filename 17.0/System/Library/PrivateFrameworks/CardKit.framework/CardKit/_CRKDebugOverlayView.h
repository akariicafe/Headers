@class UIColor, NSString, UILabel;

@interface _CRKDebugOverlayView : _CRKHitTestPassThroughView {
    UILabel *_label;
}

@property (copy, nonatomic) UIColor *color;
@property (copy, nonatomic) NSString *debugText;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
