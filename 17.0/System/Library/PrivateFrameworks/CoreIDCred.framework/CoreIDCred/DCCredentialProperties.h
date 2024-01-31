@class NSString, DCCredentialOptions, NSData, NSDate, NSDictionary, NSArray;

@interface DCCredentialProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *credentialIdentifier;
@property (retain, nonatomic) NSString *partition;
@property (nonatomic) unsigned long long credentialState;
@property (retain, nonatomic) DCCredentialOptions *options;
@property (retain, nonatomic) NSDate *createdAt;
@property (retain, nonatomic) NSDate *updatedAt;
@property (retain, nonatomic) NSDate *payloadValidFrom;
@property (retain, nonatomic) NSDate *payloadValidUntil;
@property (retain, nonatomic) NSData *payloadIngestionHash;
@property (retain, nonatomic) NSDictionary *keySigningKeys;
@property (retain, nonatomic) NSDictionary *deviceEncryptionKeys;
@property (retain, nonatomic) NSDictionary *presentmentKeys;
@property (retain, nonatomic) NSArray *payloadProtectionKeys;
@property (nonatomic) BOOL hasUsablePresentmentAuthPolicy;
@property (nonatomic) BOOL needsPresentmentKeyRefresh;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
