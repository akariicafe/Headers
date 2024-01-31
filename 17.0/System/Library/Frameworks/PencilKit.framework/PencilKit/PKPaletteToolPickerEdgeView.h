@class CAGradientLayer;

@interface PKPaletteToolPickerEdgeView : UIView {
    CAGradientLayer *_gradientLayer;
    CAGradientLayer *_maskLayer;
    BOOL _flipHorizontally;
    BOOL _flipVertically;
    long long _axis;
}

- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
