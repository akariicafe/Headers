@class NSString, UIFontDescriptor;

@interface ICFontCacheKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) int traits;
@property (readonly, nonatomic) double pointSize;
@property (readonly, nonatomic) UIFontDescriptor *fontDescriptor;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFont:(id)a0;

@end
