@class SBDisplayItemGridLayoutRestrictionInfo, SBSwitcherChamoisLayoutAttributes;

@interface _SBDisplayItemGridCacheKey : NSObject <NSCopying> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    long long _orientation;
    SBDisplayItemGridLayoutRestrictionInfo *_layoutRestrictionInfo;
    double _screenScale;
    SBSwitcherChamoisLayoutAttributes *_chamoisLayoutAttributes;
    unsigned long long _cachedHash;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 orientation:(long long)a1 layoutRestrictionInfo:(id)a2 screenScale:(double)a3 chamoisLayoutAttributes:(id)a4;

@end
