@interface AVCMediaStreamNegotiatorSettingsCoreDeviceScreenSharing : AVCMediaStreamNegotiatorSettings

- (int)connectionType;
- (int)operatingMode;
- (unsigned long long)maxBandwidth;
- (unsigned long long)minBandwidth;
- (long long)videoStreamMode;
- (long long)captureSource;
- (id)featureListString;
- (id)initWithOptions:(id)a0 deviceRole:(unsigned char)a1 error:(id *)a2;
- (unsigned int)jitterBufferMode;

@end
