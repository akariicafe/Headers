@class UILabel, UIImageView;
@protocol AXSBVoiceOverSwipeDetectorDelegate;

@interface AXSBVoiceOverSwipeDetectorView : UIView {
    UILabel *_titleLabel;
    UIImageView *_bgImageView;
    BOOL _swipeDetected;
}

@property (weak, nonatomic) id<AXSBVoiceOverSwipeDetectorDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)_swipeDetected:(id)a0;
- (void)_cancelVOSwipeActivation:(id)a0;

@end
