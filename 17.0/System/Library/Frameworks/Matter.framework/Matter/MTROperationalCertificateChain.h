@class NSData, NSNumber;

@interface MTROperationalCertificateChain : NSObject

@property (copy, nonatomic) NSData *operationalCertificate;
@property (copy, nonatomic) NSData *intermediateCertificate;
@property (copy, nonatomic) NSData *rootCertificate;
@property (copy, nonatomic) NSNumber *adminSubject;

- (void).cxx_destruct;
- (id)initWithOperationalCertificate:(id)a0 intermediateCertificate:(id)a1 rootCertificate:(id)a2 adminSubject:(id)a3;

@end
