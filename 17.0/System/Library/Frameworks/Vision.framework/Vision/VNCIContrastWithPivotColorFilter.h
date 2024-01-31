@class NSNumber;

@interface VNCIContrastWithPivotColorFilter : VNCIFilter

@property (copy, nonatomic) NSNumber *inputContrast;
@property (copy, nonatomic) NSNumber *inputPivot;

- (id)init;
- (void).cxx_destruct;
- (id)outputImage;
- (id)initWithInputParameters:(id)a0;

@end
