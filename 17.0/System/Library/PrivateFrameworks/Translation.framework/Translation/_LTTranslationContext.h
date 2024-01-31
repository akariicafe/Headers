@class NSString, NSArray, NSURL, NSUUID, _LTLocalePair;

@interface _LTTranslationContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) long long taskHint;
@property (copy, nonatomic) _LTLocalePair *localePair;
@property (nonatomic) BOOL autodetectLanguage;
@property (nonatomic) BOOL forceSourceLocale;
@property (nonatomic) BOOL censorSpeech;
@property (copy, nonatomic) NSURL *outputFileURL;
@property (copy, nonatomic) NSArray *asrModelURLs;
@property (copy, nonatomic) NSURL *mtModelURL;
@property (copy, nonatomic) NSURL *sourceURL;
@property (nonatomic) BOOL autoEndpoint;
@property (nonatomic) BOOL overrideOngoingSessionIfNeeded;
@property (nonatomic) BOOL isFinal;
@property (nonatomic) long long lidThreshold;
@property (nonatomic) long long route;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) long long asrConfidenceThreshold;
@property (nonatomic) double ttsPlaybackRate;
@property (nonatomic) BOOL enableVAD;
@property (copy, nonatomic) NSString *appIdentifier;
@property (copy, nonatomic) NSUUID *logIdentifier;
@property (nonatomic) long long sourceOrigin;
@property (nonatomic) BOOL supportsGenderDisambiguation;
@property (copy, nonatomic) NSString *untrustedClientIdentifier;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *trustedClientIdentifier;
@property (nonatomic) long long dataSharingOptInStatus;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)sanitizedCopyForUntrustedTextTranslation;

@end
