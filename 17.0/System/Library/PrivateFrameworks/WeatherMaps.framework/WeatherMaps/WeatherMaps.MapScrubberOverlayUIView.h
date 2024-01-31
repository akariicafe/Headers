@interface WeatherMaps.MapScrubberOverlayUIView : UIView {
    void /* unknown type, empty encoding */ titleDateContainer;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ dateLabel;
    void /* unknown type, empty encoding */ playPauseButton;
    void /* unknown type, empty encoding */ bar;
    void /* unknown type, empty encoding */ affordanceActionIcon;
    void /* unknown type, empty encoding */ titleButton;
    void /* unknown type, empty encoding */ regularBreakpointWidth;
    void /* unknown type, empty encoding */ wideBreakpointWidth;
    void /* unknown type, empty encoding */ verticalPadding;
    void /* unknown type, empty encoding */ horizontalPaddingPlay;
    void /* unknown type, empty encoding */ horizontalPaddingPlayToTitle;
    void /* unknown type, empty encoding */ horizontalPadding;
    void /* unknown type, empty encoding */ minimumHeight;
    void /* unknown type, empty encoding */ affordanceIconSpacing;
    void /* unknown type, empty encoding */ affordanceTextSpacing;
    void /* unknown type, empty encoding */ barVerticalSpacing;
    void /* unknown type, empty encoding */ buttonTouchInsets;
    void /* unknown type, empty encoding */ calendar;
    void /* unknown type, empty encoding */ scrubberLayoutStyle;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ menuWasOpened;
    void /* unknown type, empty encoding */ representsIsPlaying;
    void /* unknown type, empty encoding */ model;
}

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)playPauseTapped;
- (void)barTouched:(id)a0;
- (void)barValueChanged:(id)a0;
- (void)didReceiveMenuAction:(id)a0;

@end
