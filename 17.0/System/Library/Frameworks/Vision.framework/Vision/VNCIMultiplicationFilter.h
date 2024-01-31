@class NSNumber;

@interface VNCIMultiplicationFilter : VNCIFilter

@property (copy, nonatomic) NSNumber *inputFactor1;
@property (copy, nonatomic) NSNumber *inputFactor2;
@property (copy, nonatomic) NSNumber *inputFactor3;
@property (copy, nonatomic) NSNumber *inputFactor4;

- (id)init;
- (void).cxx_destruct;
- (id)outputImage;

@end
