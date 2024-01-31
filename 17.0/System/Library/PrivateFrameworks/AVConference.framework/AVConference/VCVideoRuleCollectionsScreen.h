@protocol VCHardwareSettingsEmbeddedProtocol;

@interface VCVideoRuleCollectionsScreen : VCVideoRuleCollections {
    id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (void)selectPreferredRule:(id)a0 screenSize:(struct CGSize { double x0; double x1; })a1;
- (id)initForMacDecodingOnly;
- (void)initSupportedPayloads;
- (id)initWithHardwareSettings:(id)a0;
- (BOOL)setupH264Rules;
- (BOOL)setupMacDecodingOnlyRules;

@end
