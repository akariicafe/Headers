@interface TSCH3DBarResourceCacheKey : NSObject {
    struct BarExtrusionSetting { float size; BOOL hasTopBevel; BOOL hasBottomBevel; BOOL isCylindrical; BOOL isStackedBar; struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float detail; float tension; float adaptiveThreshold; float creaseAngle; int crossType; } crossSection; struct BarExtrusionSpineDetails { float bevelHeight; long long bevelSlices; long long stride; float creaseAngle; } spine; } details; } _setting;
}

+ (id)keyWithExtrusionSetting:(const struct BarExtrusionSetting { float x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x0; float x1; float x2; float x3; int x4; } x0; struct BarExtrusionSpineDetails { float x0; long long x1; long long x2; float x3; } x1; } x5; } *)a0;

- (unsigned long long)hash;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExtrusionSetting:(const struct BarExtrusionSetting { float x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x0; float x1; float x2; float x3; int x4; } x0; struct BarExtrusionSpineDetails { float x0; long long x1; long long x2; float x3; } x1; } x5; } *)a0;

@end
