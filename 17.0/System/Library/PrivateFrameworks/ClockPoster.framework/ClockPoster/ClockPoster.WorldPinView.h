@interface ClockPoster.WorldPinView : UIControl {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ selectionState;
    void /* unknown type, empty encoding */ centerDot;
    void /* unknown type, empty encoding */ currentLocationStroke;
    void /* unknown type, empty encoding */ selectedStroke;
    void /* unknown type, empty encoding */ scaleAnimationKey;
    void /* unknown type, empty encoding */ displayedSelectionState;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)didSelect;

@end
