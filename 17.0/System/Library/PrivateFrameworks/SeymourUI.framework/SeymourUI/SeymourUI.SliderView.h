@interface SeymourUI.SliderView : UIView {
    void /* unknown type, empty encoding */ trackLayoutGuide;
    void /* unknown type, empty encoding */ value;
    void /* unknown type, empty encoding */ onValueChanged;
    void /* unknown type, empty encoding */ isEnabled;
    void /* unknown type, empty encoding */ $__lazy_storage_$_panGestureRecognizer;
    void /* unknown type, empty encoding */ elapsedTrack;
    void /* unknown type, empty encoding */ feedbackGenerator;
    void /* unknown type, empty encoding */ remainingTrack;
    void /* unknown type, empty encoding */ stackView;
    void /* unknown type, empty encoding */ styleProvider;
    void /* unknown type, empty encoding */ valueRange;
    void /* unknown type, empty encoding */ currentState;
    void /* unknown type, empty encoding */ currentTrackWidth;
    void /* unknown type, empty encoding */ elapsedTrackWidthConstraint;
    void /* unknown type, empty encoding */ oldBounds;
    void /* unknown type, empty encoding */ trackHeightConstraint;
}

@property (nonatomic) long long semanticContentAttribute;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)panGestureRecognized:(id)a0;

@end
