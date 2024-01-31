@class CAGradientLayer;

@interface PKPaletteToolPickerClippingEdgeView : UIView {
    CAGradientLayer *_gradientLayer;
    BOOL _flipHorizontally;
    long long _axis;
}

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
