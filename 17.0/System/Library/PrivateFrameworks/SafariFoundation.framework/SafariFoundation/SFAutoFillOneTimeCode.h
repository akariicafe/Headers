@class NSString, NSArray, NSURL, NSDate, WBSTOTPGenerator;

@interface SFAutoFillOneTimeCode : NSObject <NSSecureCoding> {
    NSDate *_timestamp;
    NSString *_detectedCode;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *_domainBoundTopLevelURL;
@property (readonly, copy, nonatomic) NSURL *_domainBoundEmbeddedURL;
@property (readonly, nonatomic) WBSTOTPGenerator *totpGenerator;
@property (readonly, nonatomic) long long source;
@property (readonly, copy, nonatomic) NSString *detectedCode;
@property (readonly, copy, nonatomic) NSString *machineReadableCode;
@property (readonly, copy, nonatomic) NSString *code;
@property (readonly, copy, nonatomic) NSString *displayCode;
@property (readonly, copy, nonatomic) NSString *GUID;
@property (readonly, copy, nonatomic) NSString *handle;
@property (readonly, copy, nonatomic) NSString *user;
@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, nonatomic) BOOL domainStrictMatch;
@property (readonly, copy, nonatomic) NSString *embeddedDomain;
@property (readonly, copy, nonatomic) NSArray *embeddedDomains;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) long long messageID;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedSubtitleForContext:(long long)a0;
- (id)localizedTitleForContext:(long long)a0;
- (long long)matchBoundDomainsWithFrameURLs:(id)a0;
- (id)_embeddedDomainArrayFromIMCoreEmbeddedDomains:(id)a0;
- (long long)_matchBoundDomainAndEmbeddedDomainWithFrameURLs:(id)a0;
- (long long)_matchBoundDomainAndEmbeddedDomainsWithFrameURLs:(id)a0;
- (long long)_matchURL:(id)a0 withBoundDomainURL:(id)a1 strict:(BOOL)a2;
- (id)_secureURLForDomain:(id)a0;
- (id)_stringForSource:(long long)a0;
- (id)initWithIMCoreDictionary:(id)a0;
- (id)initWithMailOneTimeCode:(id)a0 timestamp:(id)a1 messageID:(long long)a2;
- (id)initWithTOTPGenerator:(id)a0 user:(id)a1 highLevelDomain:(id)a2;
- (long long)matchDomainWithURL:(id)a0;

@end
