@interface AVCMediaStreamNegotiatorSettingsRemoteDesktopScreenSharing : AVCMediaStreamNegotiatorSettings

- (int)connectionType;
- (int)operatingMode;
- (double)rtcpTimeOutInterval;
- (unsigned long long)maxBandwidth;
- (unsigned long long)minBandwidth;
- (double)rtcpSendInterval;
- (BOOL)rtcpTimeOutEnabled;
- (long long)videoStreamMode;
- (long long)captureSource;
- (unsigned char)featureListStringType;
- (id)initWithOptions:(id)a0 deviceRole:(unsigned char)a1 error:(id *)a2;
- (unsigned int)jitterBufferMode;

@end
