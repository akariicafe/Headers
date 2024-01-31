@class NSDictionary;

@interface TPSAssetFileInfoManager : TPSSerializableObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *fileMap;

+ (id)na_identity;

- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0 clientConditions:(id)a1;
- (id)fileInfoWithMainIdentifier:(id)a0 userInterfaceStyle:(long long)a1 scale:(long long)a2;
- (void)encodeWithCoder:(id)a0;
- (void)addNewAssetInfoFromFileMap:(id)a0;
- (id)fileInfoIdentifierWithMainIdentifier:(id)a0 userInterfaceStyle:(long long)a1;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)filesFromDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
