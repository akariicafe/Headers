@class UIColor, UIImageView, UIImage, UILabel;

@interface TSKTwoLabelButton : UIButton

@property (retain, nonatomic) UILabel *secondLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImage *normalStateImage;
@property (retain, nonatomic) UIImage *highlightedStateImage;
@property (retain, nonatomic) UIImage *disabledStateImage;
@property (retain, nonatomic) UIColor *secondLabelTextColor;

- (void)cancelTrackingWithEvent:(id)a0;
- (void)dealloc;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)p_syncButtonState;

@end
