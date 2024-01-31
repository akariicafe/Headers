@interface AVCMediaStreamNegotiatorSettingsRemoteCamera : AVCMediaStreamNegotiatorSettings {
    long long _captureSource;
    BOOL _isDisparityPixelFormat;
}

+ (BOOL)isOfferSupported;

- (int)operatingMode;
- (unsigned long long)maxBandwidth;
- (unsigned long long)minBandwidth;
- (long long)videoStreamMode;
- (long long)captureSource;
- (unsigned char)featureListStringType;
- (id)initWithOptions:(id)a0 deviceRole:(unsigned char)a1 error:(id *)a2;

@end
