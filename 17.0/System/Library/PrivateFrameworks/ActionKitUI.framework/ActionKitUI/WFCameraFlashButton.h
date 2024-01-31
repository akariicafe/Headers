@class NSArray, UILabel, UIImageView;

@interface WFCameraFlashButton : UIControl

@property (retain, nonatomic) NSArray *labels;
@property (retain, nonatomic) UILabel *selectedLabel;
@property (weak, nonatomic) UIImageView *flashView;
@property (nonatomic) BOOL expanded;
@property (nonatomic) BOOL needsHiding;
@property (nonatomic) long long flashMode;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)didMoveToWindow;

@end
