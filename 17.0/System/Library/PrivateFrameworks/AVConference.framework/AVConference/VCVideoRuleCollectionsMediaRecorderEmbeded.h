@protocol VCHardwareSettingsEmbeddedProtocol;

@interface VCVideoRuleCollectionsMediaRecorderEmbeded : VCVideoRuleCollectionsMediaRecorder {
    id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (id)initWithHardwareSettings:(id)a0;
- (BOOL)isSupportedChipID;
- (BOOL)isSupportedDeviceClass;
- (unsigned char)mediaRecorderCapabilities;
- (id)mediaRecorderImageTypes;
- (id)mediaRecorderVideoCodecs;

@end
