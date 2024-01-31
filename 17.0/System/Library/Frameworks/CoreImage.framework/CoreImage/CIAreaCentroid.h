@interface CIAreaCentroid : CIReductionFilter

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernelCentroid;
- (id)_kernelWeightedCoordinate;

@end
