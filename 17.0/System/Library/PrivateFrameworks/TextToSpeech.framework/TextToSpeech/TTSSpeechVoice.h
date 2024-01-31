@class NSString, AVSpeechSynthesisProviderVoice;
@protocol TTSSpeechService;

@interface TTSSpeechVoice : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *serviceIdentifier;
@property (weak, nonatomic) id<TTSSpeechService> service;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long footprint;
@property (nonatomic) BOOL isDefault;
@property (nonatomic) BOOL isSystemVoice;
@property (readonly, nonatomic) BOOL isFallbackDefault;
@property (readonly, nonatomic) BOOL excludeInAvailableVoiceList;
@property (nonatomic) long long gender;
@property (nonatomic) long long voiceType;
@property (nonatomic) BOOL canBeDownloaded;
@property (nonatomic) BOOL isNoveltyVoice;
@property (nonatomic) BOOL isPersonalVoice;
@property (readonly, nonatomic) BOOL isCombinedFootprint;
@property (retain, nonatomic) NSString *nonCombinedVoiceId;
@property (retain, nonatomic) AVSpeechSynthesisProviderVoice *synthesisProviderVoice;

+ (id)localizedName:(id)a0 forLanguage:(id)a1;
+ (id)voiceFromAVSpeechSynthesisProviderVoice:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)localizedNameForLanguage:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
