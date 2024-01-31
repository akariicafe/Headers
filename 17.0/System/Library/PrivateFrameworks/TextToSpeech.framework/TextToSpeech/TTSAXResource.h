@class TTSSpeechVoice, NSString, NSArray, AXAsset, TTSVoiceAsset;

@interface TTSAXResource : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *assetId;
@property (retain, nonatomic) TTSSpeechVoice *speechVoice;
@property (retain, nonatomic) NSString *synthesizerBundleIdentifier;
@property (retain, nonatomic) NSString *componentSubType;
@property (nonatomic) long long footprint;
@property (nonatomic) unsigned long long assetSize;
@property (nonatomic) BOOL isInstalled;
@property (nonatomic) BOOL canBeDownloaded;
@property (nonatomic) long long memoryPeak;
@property (retain, nonatomic) AXAsset *axAsset;
@property (retain, nonatomic) TTSVoiceAsset *voiceAsset;
@property (readonly, nonatomic) NSArray *languages;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizedNameWithFootprint;
@property (readonly, nonatomic) NSString *voiceId;
@property (readonly, nonatomic) NSString *contentPath;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long subtype;
@property (readonly, nonatomic) long long gender;
@property (readonly, nonatomic) BOOL isNoveltyVoice;
@property (readonly, nonatomic) BOOL isPersonalVoice;

- (id)localizedStringForKey:(id)a0;
- (BOOL)_isDefault;
- (BOOL)memoryPeakExceedsActiveJetsamLimit;
- (BOOL)_isSystemVoice;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAsset:(id)a0;
- (unsigned long long)_resourceSubtypeFromStringInput:(id)a0;
- (id)initWithData:(id)a0;
- (unsigned long long)_resourceTypeFromStringInput:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (long long)_resourceFootprintFromStringInput:(id)a0;
- (long long)_resourceGenderFromStringInput:(id)a0;
- (void)_ensureFirstPartyComponents;
- (id)primaryLanguage;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldFilterResourceFromUI;

@end
