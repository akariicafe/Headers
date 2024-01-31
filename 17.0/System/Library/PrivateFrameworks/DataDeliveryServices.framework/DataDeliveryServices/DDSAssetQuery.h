@class DDSAttributeFilter, NSString;

@interface DDSAssetQuery : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) DDSAttributeFilter *filter;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSString *cacheKey;
@property BOOL localOnly;
@property BOOL installedOnly;
@property BOOL latestOnly;
@property BOOL cachedOnly;

- (id)init;
- (unsigned long long)hash;
- (id)dumpDescription;
- (id)initWithAssetType:(id)a0 filter:(id)a1 localOnly:(BOOL)a2 installedOnly:(BOOL)a3 latestOnly:(BOOL)a4 cachedOnly:(BOOL)a5;
- (id)initWithAssetType:(id)a0 filter:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToAssetQuery:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
