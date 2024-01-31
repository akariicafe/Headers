@interface _UIModernSwitchVisualElementCacheKey : NSObject <NSCopying> {
    unsigned long long _mask;
    struct CGColor { } *_color;
}

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqualToCacheKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithMask:(unsigned long long)a0 color:(struct CGColor { } *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
