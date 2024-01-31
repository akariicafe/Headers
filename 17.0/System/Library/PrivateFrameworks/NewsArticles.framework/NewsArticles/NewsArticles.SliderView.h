@class NSString;

@interface NewsArticles.SliderView : UIView {
    void /* unknown type, empty encoding */ stackView;
    void /* unknown type, empty encoding */ elapsedTrack;
    void /* unknown type, empty encoding */ remainingTrack;
    void /* unknown type, empty encoding */ $__lazy_storage_$_elapsedTrackWidthConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_trackHeightConstraint;
    void /* unknown type, empty encoding */ feedbackGenerator;
    void /* unknown type, empty encoding */ startingWidth;
    void /* unknown type, empty encoding */ lastSeenBounds;
    void /* unknown type, empty encoding */ $__lazy_storage_$_panRecognizer;
    void /* unknown type, empty encoding */ trackLayoutGuide;
    void /* unknown type, empty encoding */ elapsedTrackColor;
    void /* unknown type, empty encoding */ remainingTrackColor;
    void /* unknown type, empty encoding */ trackingColor;
    void /* unknown type, empty encoding */ value;
    void /* unknown type, empty encoding */ isEnabled;
    void /* unknown type, empty encoding */ isTracking;
    void /* unknown type, empty encoding */ valueChangedHandler;
}

@property (nonatomic) long long semanticContentAttribute;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic) struct CGPoint { double x0; double x1; } accessibilityActivationPoint;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)panGestureRecognized:(id)a0;

@end
