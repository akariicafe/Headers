@class NSData, NSNumber, NSString;

@interface MTRFabricInfo : NSObject

@property (readonly, nonatomic) NSData *rootPublicKey;
@property (readonly, nonatomic) NSNumber *vendorID;
@property (readonly, nonatomic) NSNumber *fabricID;
@property (readonly, nonatomic) NSNumber *nodeID;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSData *rootCertificate;
@property (readonly, nonatomic) NSData *rootCertificateTLV;
@property (readonly, nonatomic) NSData *intermediateCertificate;
@property (readonly, nonatomic) NSData *intermediateCertificateTLV;
@property (readonly, nonatomic) NSData *operationalCertificate;
@property (readonly, nonatomic) NSData *operationalCertificateTLV;
@property (readonly, nonatomic) NSNumber *fabricIndex;

- (void).cxx_destruct;
- (id)initWithFabricTable:(const void *)a0 fabricInfo:(const void *)a1;

@end
