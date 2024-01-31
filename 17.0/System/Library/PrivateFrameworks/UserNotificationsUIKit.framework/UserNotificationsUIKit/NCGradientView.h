@class CAGradientLayer;

@interface NCGradientView : UIView {
    CAGradientLayer *_gradient;
    BOOL _isVertical;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithHorizontalStartColor:(id)a0 horizontalEndColor:(id)a1;
- (id)initWithVerticalStartColor:(id)a0 verticalEndColor:(id)a1;

@end
