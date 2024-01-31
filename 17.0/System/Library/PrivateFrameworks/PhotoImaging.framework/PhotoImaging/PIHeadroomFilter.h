@class CIImage, PFParallaxColor;

@interface PIHeadroomFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } extendedRect;
@property (nonatomic) BOOL useBlur;
@property (nonatomic) BOOL isInactive;
@property (nonatomic) BOOL useHighKeyStyle;
@property (retain, nonatomic) PFParallaxColor *primaryGradientColor;
@property (nonatomic) double renderScale;

- (void).cxx_destruct;
- (id)outputImage;

@end
