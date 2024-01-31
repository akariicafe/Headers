@class NSString, UIFont;

@interface _SKUIViewElementTextLayoutCacheBestGuessCacheKey : NSObject

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long width;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
