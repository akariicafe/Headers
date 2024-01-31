@class NSString, NSDictionary, NSData, DCPresentmentProposalReaderMetadata;

@interface DCPresentmentProposal : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *credentialIdentifier;
@property (retain, nonatomic) NSString *presentmentKeyIdentifier;
@property (retain, nonatomic) NSData *presentmentPublicKey;
@property (retain, nonatomic) NSString *partition;
@property (retain, nonatomic) NSString *docType;
@property (retain, nonatomic) NSDictionary *elements;
@property (retain, nonatomic) NSData *authACL;
@property (retain, nonatomic) NSData *readerAuthCertificateData;
@property (retain, nonatomic) DCPresentmentProposalReaderMetadata *readerMetadata;
@property (readonly, nonatomic) NSString *readerIdentifier;
@property (readonly, nonatomic) NSString *readerOrganization;
@property (readonly, nonatomic) NSString *readerOrganizationalUnit;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCredentialIdentifier:(id)a0 presentmentKeyIdentifier:(id)a1 presentmentPublicKey:(id)a2 partition:(id)a3 docType:(id)a4 elements:(id)a5 authACL:(id)a6 readerAuthCertificateData:(id)a7 readerMetadata:(id)a8;

@end
