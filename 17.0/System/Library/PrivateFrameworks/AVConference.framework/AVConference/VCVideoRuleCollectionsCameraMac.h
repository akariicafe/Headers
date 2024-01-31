@protocol VCHardwareSettingsMacProtocol;

@interface VCVideoRuleCollectionsCameraMac : VCVideoRuleCollectionsCamera {
    unsigned int _encodeScore;
    unsigned int _decodeScore;
    id<VCHardwareSettingsMacProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (void)dealloc;
- (double)preferredAspectRatio;
- (void)_addWVGAEncodingRules;
- (void)_removeRulesGreaterThan720p;
- (void)_removeRulesGreaterThanVGA;
- (void)_resetJ92EncodingRulesForCameraIsHD:(BOOL)a0 isWVGA:(BOOL)a1 is1080:(BOOL)a2;
- (void)computeDecodingScore;
- (void)computeEncodingScore;
- (void)initSupportedPayloads;
- (id)initWithHardwareSettings:(id)a0;
- (void)resetEncodingRulesForCameraIsHD:(BOOL)a0 isWVGA:(BOOL)a1 is1080:(BOOL)a2;
- (BOOL)setUp1080pRules:(int)a0;
- (BOOL)setupH264Rules;
- (BOOL)setupH264WifiRules;
- (BOOL)setupHEVCRules;
- (BOOL)setupRules;
- (BOOL)useSoftFramerateSwitching;

@end
