@class NSArray, NSString, PKContactInformation, PKExternalProvisioningOptions;

@interface PKPaymentProvisioningResponse : PKPaymentWebServiceResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *downloadablePasses;
@property (readonly, copy, nonatomic) NSArray *moreInfoURLs;
@property (readonly, nonatomic) PKContactInformation *idmsContactInformation;
@property (readonly, nonatomic) NSString *nonce;
@property (readonly, copy, nonatomic) PKExternalProvisioningOptions *externalProvisioningOptions;

- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
