@class CIImage, NSNumber;

@interface CIMorphologyRectangle : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputWidth;
@property (retain, nonatomic) NSNumber *inputHeight;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)outputImage;
- (BOOL)_doMinimum;

@end
