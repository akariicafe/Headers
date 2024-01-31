@interface AVCMediaStreamNegotiatorSettingsiPadCompanion : AVCMediaStreamNegotiatorSettings

- (void)dealloc;
- (int)operatingMode;
- (unsigned long long)maxBandwidth;
- (long long)videoStreamMode;
- (long long)captureSource;
- (unsigned char)featureListStringType;
- (id)initWithOptions:(id)a0 deviceRole:(unsigned char)a1 error:(id *)a2;

@end
