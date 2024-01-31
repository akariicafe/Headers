@interface TTSNashvilleSpeechVoice : TTSSpeechVoice

@property (nonatomic) BOOL overrideDefault;
@property (nonatomic) BOOL overrideFallbackDefault;
@property (nonatomic) BOOL overrideExcludeInAvailableVoiceList;

+ (BOOL)supportsSecureCoding;

- (BOOL)isDefault;
- (BOOL)isSystemVoice;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isFallbackDefault;
- (BOOL)isCombinedFootprint;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)excludeInAvailableVoiceList;

@end
