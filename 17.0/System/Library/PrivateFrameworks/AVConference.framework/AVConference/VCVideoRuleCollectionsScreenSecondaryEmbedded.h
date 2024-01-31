@protocol VCHardwareSettingsEmbeddedProtocol;

@interface VCVideoRuleCollectionsScreenSecondaryEmbedded : VCVideoRuleCollectionsScreenSecondary {
    id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (void)selectPreferredRule:(id)a0 screenSize:(struct CGSize { double x0; double x1; })a1;
- (void)initSupportedPayloads;
- (id)initWithHardwareSettings:(id)a0;
- (BOOL)setupH264Rules;
- (BOOL)setupHEVCRules;
- (BOOL)setupRules;
- (unsigned int)tilesPerFrame:(int)a0;

@end
