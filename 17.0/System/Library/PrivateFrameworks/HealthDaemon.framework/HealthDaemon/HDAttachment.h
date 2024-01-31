@class NSUUID, NSString, NSDictionary, NSDate, HDEncryptedArchiveSymmetricKey;

@interface HDAttachment : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *fileHash;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, copy, nonatomic) HDEncryptedArchiveSymmetricKey *encryptionKey;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)hkAttachment;
- (id)initWithIdentifier:(id)a0 name:(id)a1 type:(id)a2 hash:(id)a3 size:(unsigned long long)a4 creationDate:(id)a5 metadata:(id)a6 encryptionKey:(id)a7;

@end
