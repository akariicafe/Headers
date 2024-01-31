@interface _CUIThemeFacetCacheKey : NSObject {
    struct _renditionkeytoken { unsigned short identifier; unsigned short value; } keyList[22];
    long long themeIndex;
    unsigned long long hashPrecalc;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash64;
- (id)initWithKeyList:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0 themeIndex:(long long)a1;

@end
