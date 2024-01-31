@class NSString;

@interface _SKUIFontDescriptorCacheKey : NSObject

@property (readonly, nonatomic) struct __CFString { } *textStyle;
@property (readonly, nonatomic) NSString *sizeCategory;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTextStyle:(struct __CFString { } *)a0 sizeCategory:(id)a1;

@end
