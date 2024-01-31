@interface VNGenerateOpticalFlowRequestConfiguration : VNTargetedImageRequestConfiguration {
    BOOL _keepNetworkOutput;
    unsigned int _outputPixelFormat;
    unsigned long long _computationAccuracy;
}

- (id)initWithRequestClass:(Class)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
