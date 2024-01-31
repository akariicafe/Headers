@class UIColor;

@interface ICCheckmarkAuthorHighlightValueAttribute : NSObject <NSCopying>

@property (nonatomic) double foregroundAlpha;
@property (copy, nonatomic) UIColor *highlightColor;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
