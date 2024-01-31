@class SKUIViewElement;

@interface _SKUIDynamicGridSizeCacheKey : NSObject <NSCopying>

@property (nonatomic) long long position;
@property (retain, nonatomic) SKUIViewElement *viewElement;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)__isSKUIDynamicGridSizeCacheKey;

@end
