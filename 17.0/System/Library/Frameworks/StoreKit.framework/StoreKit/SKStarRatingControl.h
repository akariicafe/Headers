@class NSString, UIImageView, UILabel;

@interface SKStarRatingControl : UIControl {
    UIImageView *_backgroundImageView;
    UILabel *_explanationLabel;
    UIImageView *_foregroundImageView;
    struct CGSize { double width; double height; } _hitPadding;
    struct CGPoint { double x; double y; } _trackingLastPoint;
    struct CGPoint { double x; double y; } _trackingStartPoint;
    float _value;
}

@property (copy, nonatomic) NSString *explanationText;
@property (nonatomic) double starWidth;
@property (nonatomic) float value;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;
- (void)sizeToFit;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (BOOL)canHandleSwipes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_foregroundImageClipBounds;
- (id)_newExplanationLabel;
- (void)_updateValueForPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithBackgroundImage:(id)a0 foregroundImage:(id)a1;
- (void)setHitPadding:(struct CGSize { double x0; double x1; })a0;

@end
