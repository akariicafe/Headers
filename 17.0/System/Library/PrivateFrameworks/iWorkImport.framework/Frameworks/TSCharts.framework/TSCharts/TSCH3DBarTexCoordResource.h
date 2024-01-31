@class TSCH3DBarExtrusionGeometry, TSCH3DTexCoordGeneration;

@interface TSCH3DBarTexCoordResource : TSCH3DAbstractBarTexCoordResource {
    TSCH3DBarExtrusionGeometry *_geometry;
    TSCH3DTexCoordGeneration *_generator;
}

- (void).cxx_destruct;
- (id)get;
- (id)initWithGeometry:(id)a0 generator:(id)a1;

@end
