@interface _UICGColorCacheKey : NSObject <NSCopying> {
    struct __CFArray { } *_colors;
}

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqualToCacheKey:(id)a0;
- (id)initWithColors:(struct CGColor { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
