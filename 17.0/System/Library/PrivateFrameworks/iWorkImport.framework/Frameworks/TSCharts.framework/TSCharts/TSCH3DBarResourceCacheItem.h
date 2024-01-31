@class TSCH3DBarVertexResource, TSCH3DBarTexCoordResource, TSCH3DBarNormalResource, TSCH3DBarExtrusionGeometry;

@interface TSCH3DBarResourceCacheItem : NSObject {
    TSCH3DBarExtrusionGeometry *_barGeometry;
}

@property (readonly, nonatomic) TSCH3DBarVertexResource *vertexResource;
@property (readonly, nonatomic) TSCH3DBarNormalResource *normalResource;
@property (readonly, nonatomic) TSCH3DBarTexCoordResource *texCoordResource;

+ (id)itemWithExtrusionSetting:(const struct BarExtrusionSetting { float x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x0; float x1; float x2; float x3; int x4; } x0; struct BarExtrusionSpineDetails { float x0; long long x1; long long x2; float x3; } x1; } x5; } *)a0;

- (void).cxx_destruct;
- (id)initWithExtrusionSetting:(const struct BarExtrusionSetting { float x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x0; float x1; float x2; float x3; int x4; } x0; struct BarExtrusionSpineDetails { float x0; long long x1; long long x2; float x3; } x1; } x5; } *)a0;

@end
