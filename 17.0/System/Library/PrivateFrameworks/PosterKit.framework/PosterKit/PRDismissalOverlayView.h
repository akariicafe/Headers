@class UIView;
@protocol PRDismissalOverlayViewDelegate;

@interface PRDismissalOverlayView : UIView

@property (retain, nonatomic) UIView *leftTapRecognizerView;
@property (retain, nonatomic) UIView *rightTapRecognizerView;
@property (retain, nonatomic) UIView *topTapRecognizerView;
@property (retain, nonatomic) UIView *bottomTapRecognizerView;
@property (weak, nonatomic) id<PRDismissalOverlayViewDelegate> delegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } touchPassthroughRect;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_tapGestureRecognized:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;

@end
