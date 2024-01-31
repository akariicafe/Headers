@interface AVCMediaStreamNegotiatorSettingsRemoteMic : AVCMediaStreamNegotiatorSettings {
    int _preferredAudioPayload;
    unsigned long long _channelCount;
}

- (int)operatingMode;
- (unsigned long long)ptime;
- (long long)audioStreamMode;
- (id)initWithOptions:(id)a0 deviceRole:(unsigned char)a1 error:(id *)a2;
- (int)preferredAudioCodec;

@end
