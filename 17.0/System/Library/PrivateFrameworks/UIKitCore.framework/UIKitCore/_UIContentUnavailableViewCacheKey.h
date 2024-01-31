@interface _UIContentUnavailableViewCacheKey : NSObject <NSCopying> {
    unsigned long long _style;
    struct CGColor { } *_color;
}

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqualToCacheKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStyle:(unsigned long long)a0 color:(struct CGColor { } *)a1;

@end
