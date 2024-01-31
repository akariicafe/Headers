@class NSMutableSet, FPItemID;

@interface QLCacheFileProviderFileIdentifier : QLCacheFileIdentifier <NSSecureCoding>

@property (class, readonly) NSMutableSet *knownFileProviderIdentifiersSoFar;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) FPItemID *itemID;

+ (Class)versionedFileIdentifierClass;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithItemID:(id)a0;

@end
