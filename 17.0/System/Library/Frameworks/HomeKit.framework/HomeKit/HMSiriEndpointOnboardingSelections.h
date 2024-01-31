@class NSString, NSArray, HMSettingLanguageValue;

@interface HMSiriEndpointOnboardingSelections : NSObject <HMFLogging, HMFObject, HMMessageEncoding>

@property BOOL hasSiriEnabled;
@property BOOL hasAllowHeySiri;
@property BOOL hasAirPlayEnabled;
@property BOOL hasShareSiriAnalyticsEnabled;
@property BOOL hasExplicitContentAllowed;
@property BOOL hasLanguageValue;
@property BOOL hasAnnounceEnabled;
@property BOOL hasDoorbellChimeEnabled;
@property BOOL hasLightWhenUsingSiriEnabled;
@property (getter=isSiriEnabled) BOOL siriEnabled;
@property BOOL allowHeySiri;
@property (getter=isAirPlayEnabled) BOOL airPlayEnabled;
@property (getter=isShareSiriAnalyticsEnabled) BOOL shareSiriAnalyticsEnabled;
@property (getter=isExplicitContentAllowed) BOOL explicitContentAllowed;
@property (retain) HMSettingLanguageValue *languageValue;
@property (getter=isDoorbellChimeEnabled) BOOL doorbellChimeEnabled;
@property (getter=isAnnounceEnabled) BOOL announceEnabled;
@property (getter=isLightWhenUsingSiriEnabled) BOOL lightWhenUsingSiriEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)shortDescription;
+ (id)logCategory;

- (id)init;
- (id)initWithPayload:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initWithSiriEnabled:(BOOL)a0 allowHeySiri:(BOOL)a1 airPlayEnabled:(BOOL)a2 playbackInfluencesForYouEnabled:(BOOL)a3 shareSiriAnalyticsEnabled:(BOOL)a4 explicitContentAllowed:(BOOL)a5 languageValue:(id)a6;
- (id)initWithSiriEnabled:(BOOL)a0 allowHeySiri:(BOOL)a1 airPlayEnabled:(BOOL)a2;
- (id)initWithSiriEnabled:(BOOL)a0 allowHeySiri:(BOOL)a1 airPlayEnabled:(BOOL)a2 languageValue:(id)a3;
- (id)initWithSiriEnabled:(BOOL)a0 allowHeySiri:(BOOL)a1 airPlayEnabled:(BOOL)a2 playbackInfluencesForYouEnabled:(BOOL)a3 shareSiriAnalyticsEnabled:(BOOL)a4 explicitContentAllowed:(BOOL)a5;
- (id)initWithSiriEnabled:(BOOL)a0 allowHeySiri:(BOOL)a1 airPlayEnabled:(BOOL)a2 playbackInfluencesForYouEnabled:(BOOL)a3 shareSiriAnalyticsEnabled:(BOOL)a4 explicitContentAllowed:(BOOL)a5 languageValue:(id)a6;
- (id)payloadCopy;

@end
