@class NSData, NSDictionary;

@interface HMDHomeNFCReaderKey : HMFObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSData *publicKeyExternalRepresentation;
@property (readonly, copy) NSData *publicKey;
@property (readonly, copy) NSData *externalRepresentation;
@property (readonly, copy) NSData *privateKey;
@property (readonly, copy) NSData *identifier;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;

+ (id)identifierForKey:(id)a0;
+ (id)createRandomKey;
+ (id)createWithExternalRepresentation:(id)a0;
+ (id)createWithKeychainItem:(id)a0;
+ (id)keychainItemAccountAttributeValueWithHome:(id)a0 keyIdentifier:(id)a1;
+ (id)publicKeyWithPublicKeyExternalRepresentation:(id)a0;
+ (id)createWithDictionaryRepresentation:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)createKeychainItemForHome:(id)a0;
- (id)initWithIdentifier:(id)a0 privateKey:(id)a1 publicKeyExternalRepresentation:(id)a2;

@end
