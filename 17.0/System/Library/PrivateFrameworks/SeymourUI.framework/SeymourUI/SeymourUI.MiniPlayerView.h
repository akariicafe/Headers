@interface SeymourUI.MiniPlayerView : UIView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ controlsStackView;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ metadataStackView;
    void /* unknown type, empty encoding */ playPauseControl;
    void /* unknown type, empty encoding */ skipForwardControl;
    void /* unknown type, empty encoding */ titleLabel;
}

- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)tapRecognized:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)playbackControlTapped:(id)a0;

@end
