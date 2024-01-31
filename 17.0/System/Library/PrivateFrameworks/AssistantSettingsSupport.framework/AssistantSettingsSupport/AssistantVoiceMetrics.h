@class NSString, NSMutableSet;

@interface AssistantVoiceMetrics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *voiceDownloadKey;
@property (readonly) NSString *lastVoicePreviewedKey;
@property (readonly) unsigned long long voicesPreviewed;
@property (readonly) unsigned long long uniqueVoicesPreviewed;
@property (readonly) long long downloadObservationBeginTimestamp;
@property (readonly) long long downloadObservationEndTimestamp;
@property (nonatomic) BOOL sentOnce;
@property (retain) NSMutableSet *mutableUniqueVoicesPreviewed;
@property BOOL previewedSuccessfully;
@property BOOL isCellularAllowed;
@property float downloadObservationProgress;
@property BOOL downloadError;

+ (id)keyForLanguage:(id)a0 gender:(long long)a1;
+ (id)keyForLanguage:(id)a0 name:(id)a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)sendAnalyticsEvent;
- (double)_clockFactor;
- (id)dictionaryMetrics;
- (void)beginDownloadObservation;
- (double)downloadObservationDuration;
- (void)endDownloadObservation;
- (void)setVoiceDownloadForLanguageCode:(id)a0 gender:(long long)a1;
- (void)setVoiceDownloadForLanguageCode:(id)a0 name:(id)a1;
- (void)setVoicePreviewedForLanguageCode:(id)a0 gender:(long long)a1;
- (void)setVoicePreviewedForLanguageCode:(id)a0 name:(id)a1;

@end
