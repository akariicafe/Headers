@class UIColor, UIImageView, UIImage, UIView;
@protocol PKSegmentedBarConfiguration;

@interface PKSegmentedBarView : UIView {
    unsigned int _axis;
    UIImageView *_bar;
    UIView *_placeholder;
    UIImage *_image;
    double _barLength;
    double _maximumLength;
    id<PKSegmentedBarConfiguration> _configuration;
    id /* block */ _imageCompletion;
    _Atomic unsigned long long _generationCounter;
}

@property (nonatomic) BOOL showPlaceholder;
@property (nonatomic) BOOL roundBaselineCorners;
@property (nonatomic) BOOL useSmallCornerRadius;
@property (nonatomic, getter=isBlurDisabled) BOOL blurDisabled;
@property (retain, nonatomic) UIColor *placeholderColor;
@property (readonly, nonatomic) double minimumLength;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_callCompletion;
- (void)_generateImageForConfiguration:(id)a0 barLength:(double)a1 maximumLength:(double)a2 synchronous:(BOOL)a3;
- (void)_updateImageWithImage:(id)a0;
- (void)_updatePlaceholder;
- (void)configureWithBarConfiguration:(id)a0 axis:(unsigned int)a1 maximumLength:(double)a2 barLength:(double)a3 synchronous:(BOOL)a4 completion:(id /* block */)a5;

@end
