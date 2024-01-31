@protocol SXFontAttributes;

@interface SXFontIndexCacheKey : NSObject <NSCopying>

@property (readonly, nonatomic) id<SXFontAttributes> fontAttributes;
@property (readonly, nonatomic) long long fontSize;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFontAttributes:(id)a0 fontSize:(long long)a1;

@end
