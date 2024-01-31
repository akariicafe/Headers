@class UILabel;

@interface CAMDisabledModeOverlayView : UIView

@property (readonly, nonatomic) UILabel *_messageLabel;
@property (nonatomic) long long disabledModeReason;
@property (nonatomic) long long orientation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewportFrame;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (void)_updateText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForMessageLabel;

@end
