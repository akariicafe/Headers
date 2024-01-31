@class NSSet, NSUUID, NSData;

@interface CRKIdentitySharingSendAdvertisingIdentifierAndCertificateRequest : CATTaskRequest

@property (retain, nonatomic) NSSet *recipients;
@property (retain, nonatomic) NSUUID *advertisingIdentifier;
@property (retain, nonatomic) NSData *activeCertificateData;
@property (retain, nonatomic) NSData *stagedCertificateData;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
