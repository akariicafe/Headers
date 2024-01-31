@class ICEncryptionMetadata, NSData;

@interface ICEncryptionObject : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ICEncryptionMetadata *metadata;
@property (readonly, nonatomic) NSData *wrappedEncryptionKey;
@property (readonly, nonatomic) NSData *encryptedData;

- (BOOL)validate;
- (unsigned long long)hash;
- (id)serialized;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMetadata:(id)a0 wrappedEncryptionKey:(id)a1 encryptedData:(id)a2;
- (id)initWithSerializedData:(id)a0;

@end
