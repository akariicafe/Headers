@class CIImage, NSNumber;

@interface NUGainMapClearFilter : CIFilter

@property (retain, nonatomic) CIImage *inputGainMap;
@property (retain, nonatomic) CIImage *inputMatte;
@property (retain, nonatomic) NSNumber *inputInvertMatte;

- (void).cxx_destruct;
- (id)outputImage;

@end
