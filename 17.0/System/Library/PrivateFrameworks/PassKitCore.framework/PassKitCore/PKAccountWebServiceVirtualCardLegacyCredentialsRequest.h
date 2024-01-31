@class NSString, NSURL, PKVirtualCardEncryptionFields;

@interface PKAccountWebServiceVirtualCardLegacyCredentialsRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *virtualCardIdentifier;
@property (retain, nonatomic) PKVirtualCardEncryptionFields *encryptionFields;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end
