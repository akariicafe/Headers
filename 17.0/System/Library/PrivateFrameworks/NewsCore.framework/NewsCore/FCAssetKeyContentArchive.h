@class NSData;

@interface FCAssetKeyContentArchive : FCContentArchive {
    NSData *_wrappingKey;
    NSData *_wrappingKeyID;
}

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)manifest;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)unarchiveIntoContentContext:(id)a0;

@end
