@class NSString, NSData, NSDate, NSNumber;

@interface MCCertificatePayload : MCPayload {
    NSNumber *_isIdentity;
    NSNumber *_isRoot;
    NSNumber *_expiryInterval;
    NSString *_certSubject;
    NSString *_certIssuer;
}

@property (copy, nonatomic) NSString *installedOnDeviceID;
@property (retain, nonatomic) NSData *certificatePersistentID;
@property (readonly, nonatomic) BOOL isRoot;
@property (readonly, nonatomic) BOOL isFullyTrustedRootCert;
@property (readonly, nonatomic) BOOL isIdentity;
@property (readonly, retain, nonatomic) NSDate *expiry;
@property (readonly, nonatomic) BOOL isSigned;
@property (readonly, nonatomic) BOOL isMDMClientIdentity;
@property (readonly, nonatomic) NSString *SMIMEEmailAddress;
@property (readonly, nonatomic) BOOL isHardwareBound;

- (id)verboseDescription;
- (struct __SecCertificate { } *)copyCertificate;
- (void).cxx_destruct;
- (id)title;
- (id)issuer;
- (id)certificateSubject;
- (struct __SecIdentity { } *)copyIdentityFromKeychain;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;

@end
