@class SUUIViewElement;

@interface _SUUIDynamicGridSizeCacheKey : NSObject <NSCopying>

@property (nonatomic) long long position;
@property (retain, nonatomic) SUUIViewElement *viewElement;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)__isSUUIDynamicGridSizeCacheKey;

@end
