@class NSString, NSData;

@interface ICEncryptionMetadata : NSObject <NSCopying>

@property (readonly, nonatomic) long long cipherVersion;
@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSData *passphraseSalt;
@property (readonly, nonatomic) unsigned long long passphraseIterationCount;
@property (readonly, nonatomic) NSString *passphraseHint;
@property (readonly, nonatomic) NSString *accountKeyIdentifier;
@property (readonly, nonatomic) NSData *serializedData;
@property (readonly, nonatomic) NSData *authenticatedData;

+ (id)makeForV1CipherWithObjectIdentifier:(id)a0 salt:(id)a1 iterationCount:(unsigned long long)a2 hint:(id)a3;
+ (id)makeForV1NeoCipherWithObjectIdentifier:(id)a0 salt:(id)a1 iterationCount:(unsigned long long)a2 hint:(id)a3;
+ (id)makeForV1NeoSidecarCipherWithObjectIdentifier:(id)a0;
+ (id)makeForV2CipherWithObjectIdentifier:(id)a0 accountKeyIdentifier:(id)a1;
+ (id)makeFromMetadata:(id)a0 forObjectIdentifier:(id)a1;

- (BOOL)validate;
- (unsigned long long)hash;
- (BOOL)serialize;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)deserializeWithData:(id)a0 authenticatedData:(id)a1;
- (id)initWithCipherVersion:(long long)a0 objectIdentifier:(id)a1 passphraseSalt:(id)a2 passphraseIterationCount:(unsigned long long)a3 passphraseHint:(id)a4 accountKeyIdentifier:(id)a5;
- (id)initWithSerializedData:(id)a0 authenticatedData:(id)a1;

@end
