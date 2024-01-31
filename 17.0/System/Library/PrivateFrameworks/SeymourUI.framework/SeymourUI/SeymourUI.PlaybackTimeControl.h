@interface SeymourUI.PlaybackTimeControl : UIControl {
    void /* unknown type, empty encoding */ elapsedTimeLabel;
    void /* unknown type, empty encoding */ elapsedTrackView;
    void /* unknown type, empty encoding */ remainingTimeLabel;
    void /* unknown type, empty encoding */ remainingTrackView;
    void /* unknown type, empty encoding */ elapsedTimeLabelBottomConstraint;
    void /* unknown type, empty encoding */ elapsedTrackViewWidthConstraint;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ trackContainer;
    void /* unknown type, empty encoding */ trackMask;
    void /* unknown type, empty encoding */ elapsedTimeFormatter;
    void /* unknown type, empty encoding */ remainingTimeFormatter;
}

- (void)traitCollectionDidChange:(id)a0;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (id)viewForBaselineLayout;

@end
