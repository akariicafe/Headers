@class UIActivityIndicatorView, UIViewPropertyAnimator, NSDate;

@interface ICDocCamSpinner : NSObject

@property (retain, nonatomic) NSDate *showDate;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) double minimumDuration;
@property (retain, nonatomic) UIViewPropertyAnimator *animator;

- (void)show;
- (void).cxx_destruct;
- (void)hide;
- (id)initWithView:(id)a0 minimumDuration:(double)a1;

@end
