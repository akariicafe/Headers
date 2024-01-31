@class CIImage, CIVector, NSNumber;

@interface CIOpTile : CIFilter {
    CIVector *inputCenter;
    NSNumber *inputScale;
    NSNumber *inputAngle;
    NSNumber *inputWidth;
}

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIOpTile;

@end
