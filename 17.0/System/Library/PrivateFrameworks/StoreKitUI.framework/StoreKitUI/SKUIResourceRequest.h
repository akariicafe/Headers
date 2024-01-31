@interface SKUIResourceRequest : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL cachesInMemory;
@property (retain, nonatomic) id cacheKey;
@property (nonatomic) unsigned long long requestIdentifier;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initSKUIResourceRequest;
- (void)finishWithResource:(id)a0;
- (id)newLoadOperation;

@end
