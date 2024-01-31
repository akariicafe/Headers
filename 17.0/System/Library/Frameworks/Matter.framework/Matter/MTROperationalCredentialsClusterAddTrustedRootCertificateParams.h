@class NSData, NSNumber;

@interface MTROperationalCredentialsClusterAddTrustedRootCertificateParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *rootCertificate;
@property (copy, nonatomic) NSData *rootCACertificate;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
