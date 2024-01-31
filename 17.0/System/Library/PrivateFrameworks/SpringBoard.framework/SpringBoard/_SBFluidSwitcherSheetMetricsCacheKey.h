@class UISApplicationSupportDisplayEdgeInfo;

@interface _SBFluidSwitcherSheetMetricsCacheKey : NSObject <NSCopying> {
    struct CGSize { double width; double height; } _boundsSize;
    UISApplicationSupportDisplayEdgeInfo *_displayEdgeInfo;
    double _displayScale;
    long long _interfaceOrientation;
    unsigned long long _cachedHash;
    long long _userInterfaceIdiom;
    long long _configuration;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBoundsSize:(struct CGSize { double x0; double x1; })a0 interfaceOrientation:(long long)a1 configuration:(long long)a2 userInterfaceIdiom:(long long)a3 displayScale:(double)a4 displayEdgeInfo:(id)a5;

@end
