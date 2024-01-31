@class SAMLKeyRetrievalMethod, NSString, NSData, SAMLX509Data, SAMLSignatureKeyValue, SAMLPGPData;

@interface SAMLKeyInfo : SAMLBaseElement

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *keyName;
@property (readonly, nonatomic) SAMLSignatureKeyValue *keyValue;
@property (readonly, nonatomic) SAMLKeyRetrievalMethod *retrievalMethod;
@property (readonly, nonatomic) SAMLX509Data *x509Data;
@property (readonly, nonatomic) SAMLPGPData *pgpData;
@property (readonly, nonatomic) NSData *spkiSexpData;
@property (readonly, nonatomic) NSString *mgmtData;

+ (id)createElement:(id *)a0;

@end
