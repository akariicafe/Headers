@class NSString, NSUUID, NSData, NSMutableDictionary, NSMapTable;

@interface IDSGroupSessionDataCryptor : NSObject <NSSecureCoding, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_topic;
    NSUUID *_encryptingKeyID;
    NSData *_encryptingKey;
    NSData *_encryptingKeySalt;
    struct _CCCryptor { } *_encryptingCryptor;
    NSMutableDictionary *_decryptionKeysByKeyID;
    NSMapTable *_decryptionCryptorsByKeyID;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTopic:(id)a0;
- (id)decryptData:(id)a0 keyID:(id)a1 sequenceNumber:(unsigned long long)a2 error:(id *)a3;
- (id)encryptData:(id)a0 sequenceNumber:(unsigned long long)a1 error:(id *)a2;
- (id)getDecryptionKeyIDSet;
- (id)getEncryptionKeyID;
- (id)initWithTopic:(id)a0 keyManager:(id)a1;
- (BOOL)isEqualToCryptor:(id)a0;

@end
