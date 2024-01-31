@class CABackdropLayer, CAMetalLayer;

@interface PKMetalView : UIView {
    CABackdropLayer *_backdropLayer;
    CAMetalLayer *_metalLayer;
    BOOL _isFixedPixelSize;
    BOOL _doubleBuffered;
    BOOL _useLuminanceColorFilter;
    unsigned long long _pixelFormat;
    struct CGSize { double width; double height; } _fixedPixelSize;
}

- (void).cxx_destruct;
- (void)accessibilityInvertColorsStatusDidChange:(id)a0;

@end
