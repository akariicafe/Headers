@protocol VCHardwareSettingsMacProtocol;

@interface VCVideoRuleCollectionsMediaRecorderMac : VCVideoRuleCollectionsMediaRecorder {
    id<VCHardwareSettingsMacProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (id)initWithHardwareSettings:(id)a0;
- (unsigned char)mediaRecorderCapabilities;
- (id)mediaRecorderImageTypes;
- (id)mediaRecorderVideoCodecs;

@end
