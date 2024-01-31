@interface TSWPFontCacheValue : NSObject

@property (readonly, nonatomic) struct __CTFont { } *ctFont;

+ (id)cacheValueWithCTFont:(struct __CTFont { } *)a0;

- (void)dealloc;
- (id)initWithCTFont:(struct __CTFont { } *)a0;

@end
