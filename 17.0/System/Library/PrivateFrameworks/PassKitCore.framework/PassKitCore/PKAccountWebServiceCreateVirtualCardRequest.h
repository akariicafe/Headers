@class NSString, NSURL, PKVirtualCardEncryptionFields;

@interface PKAccountWebServiceCreateVirtualCardRequest : PKAccountWebServiceRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) long long type;
@property (retain, nonatomic) PKVirtualCardEncryptionFields *encryptionFields;


- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end
