@class NSArray, NSDictionary;

@interface SBAppLayoutAutoLayoutSpaceCacheKey : NSObject <NSCopying> {
    NSArray *_zOrderedItems;
    NSDictionary *_recordsForItems;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _containerBounds;
    long long _containerOrientation;
    double _floatingDockHeight;
    BOOL _hideStrips;
    BOOL _hideDock;
    unsigned long long _hash;
}

+ (id)cacheKeyForSnapshotOfAppLayout:(id)a0 chamoisLayoutAttributes:(id)a1 containerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 containerOrientation:(long long)a3 floatingDockHeight:(double)a4 hideStrips:(BOOL)a5 hideDock:(BOOL)a6;

- (unsigned long long)hash;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithAppLayout:(id)a0 chamoisLayoutAttributes:(id)a1 containerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 containerOrientation:(long long)a3 floatingDockHeight:(double)a4 hideStrips:(BOOL)a5 hideDock:(BOOL)a6;

@end
