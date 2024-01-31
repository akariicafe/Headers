@interface VNGenerateAnimalSegmentationRequestConfiguration : VNImageBasedRequestConfiguration {
    unsigned int _outputPixelFormat;
    long long _qualityLevel;
}

- (id)initWithRequestClass:(Class)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
