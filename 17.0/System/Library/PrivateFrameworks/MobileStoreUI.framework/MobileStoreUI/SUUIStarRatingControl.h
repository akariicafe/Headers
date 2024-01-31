@class UIImage, UIImageView;

@interface SUUIStarRatingControl : UIControl {
    long long _previousUserRating;
    UIImageView *_emptyStarsImageView;
    UIImageView *_filledStarsImageView;
}

@property (retain, nonatomic) UIImage *emptyStarsImage;
@property (retain, nonatomic) UIImage *filledStarsImage;
@property (nonatomic) long long userRating;
@property (nonatomic) float starSpacing;
@property (nonatomic) float starWidth;

- (void)setBackgroundColor:(id)a0;
- (void)cancelTrackingWithEvent:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_isRTL;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)_firstStar;
- (unsigned long long)_lastStar;
- (unsigned long long)_ratingForUIDirection:(unsigned long long)a0;
- (double)_unfilledStarsMinX;
- (double)_unfilledStarsWidth;
- (void)_updateUserRatingWithTouch:(id)a0;

@end
