@class NSNumber, NSString;

@interface MPStoreItemMetadataCacheKey : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSNumber *enqueuerAccountIdentifier;
@property (nonatomic, getter=isPersonalized) BOOL personalized;
@property (copy, nonatomic) NSString *storefrontIdentifier;

+ (void)getCacheKeyWithRequest:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_fastGetCacheKeyWithRequest:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_slowGetCacheKeyWithRequest:(id)a0 completionHandler:(id /* block */)a1;

- (unsigned long long)hash;
- (BOOL)_isGoodCacheKey;
- (id)description;
- (id)initWithRequest:(id)a0 response:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
