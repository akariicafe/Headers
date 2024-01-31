@class CIImage, NSNumber;

@interface CIEdgeWork : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputRadius;

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIEdgeWork;
- (id)_CIEdgeWorkContrast;

@end
