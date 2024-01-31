@class NSURL, NSString, NSData;

@interface PKPeerPaymentWebServiceContext : PKWebServiceContext

@property (readonly, copy, nonatomic) NSURL *serviceURL;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, copy, nonatomic) NSString *pushTopic;
@property (copy, nonatomic) NSString *pushToken;
@property (nonatomic) BOOL devSigned;
@property (readonly, copy, nonatomic) NSString *companionSerialNumber;
@property (copy, nonatomic) NSData *signedEnrollmentDataSignature;

+ (BOOL)supportsSecureCoding;
+ (id)contextWithArchive:(id)a0;

- (void)updateContextWithDeviceRegistrationData:(id)a0 registrationResponse:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
