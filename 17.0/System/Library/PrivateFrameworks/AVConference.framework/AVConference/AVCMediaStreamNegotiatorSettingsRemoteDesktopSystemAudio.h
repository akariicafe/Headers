@interface AVCMediaStreamNegotiatorSettingsRemoteDesktopSystemAudio : AVCMediaStreamNegotiatorSettings {
    int _preferredAudioPayload;
}

- (unsigned long long)audioChannelCount;
- (int)operatingMode;
- (unsigned long long)ptime;
- (double)rtcpTimeOutInterval;
- (long long)audioStreamMode;
- (double)rtcpSendInterval;
- (BOOL)rtcpTimeOutEnabled;
- (id)initWithOptions:(id)a0 deviceRole:(unsigned char)a1 error:(id *)a2;
- (unsigned int)jitterBufferMode;
- (int)preferredAudioCodec;
- (unsigned long long)preferredMediaBitRate;

@end
