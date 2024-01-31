@class NSData, ICEncryptionMetadata;

@interface ICEncryptionKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSData *keyData;
@property (readonly, nonatomic) ICEncryptionMetadata *metadata;
@property (readonly, nonatomic) NSData *serializedData;

- (BOOL)validate;
- (unsigned long long)hash;
- (BOOL)serialize;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)deserializeWithData:(id)a0;
- (id)initWithKeyData:(id)a0 metadata:(id)a1;
- (id)initWithSerializedData:(id)a0;

@end
