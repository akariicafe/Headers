@class NSData, NSArray;

@interface MSCMSAuthEnvelopedData : NSObject {
    void /* unknown type, empty encoding */ dataContent;
    void /* unknown type, empty encoding */ recipients;
    void /* unknown type, empty encoding */ protectedAttributes;
    void /* unknown type, empty encoding */ unprotectedAttributes;
    void /* unknown type, empty encoding */ originatorCertificates;
    void /* unknown type, empty encoding */ encryptedContent;
}

@property (nonatomic, copy) NSData *dataContent;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, retain) void /* unknown type, empty encoding */ encryptionAlgorithm;
@property (nonatomic, copy) NSArray *protectedAttributes;
@property (nonatomic, copy) NSArray *unprotectedAttributes;
@property (nonatomic, copy) NSArray *originatorCertificates;
@property (nonatomic, retain) void /* unknown type, empty encoding */ contentType;
@property (nonatomic, retain) void /* unknown type, empty encoding */ embeddedContent;

+ (id)decodeMessageSecurityObject:(id)a0 options:(id)a1 error:(id *)a2;

- (id)init;
- (void)addRecipient:(id)a0;
- (void).cxx_destruct;
- (id)type;
- (void)addProtectedAttribute:(id)a0;
- (id)encodeMessageSecurityObject:(id *)a0;
- (id)initWithDataContent:(id)a0 recipient:(id)a1;
- (void)addUnprotectedAttribute:(id)a0;
- (id)getAttributesWithOID:(id)a0;
- (id)initWithDataContent:(id)a0 recipient:(id)a1 encryptionAlgorithm:(id)a2;
- (id)initWithEmbeddedContent:(id)a0 recipient:(id)a1;
- (id)initWithEmbeddedContent:(id)a0 recipient:(id)a1 encryptionAlgorithm:(id)a2;
- (id)initWithEncryptionAlgorithm:(id)a0;
- (void)setContentTypeWithType:(id)a0;

@end
