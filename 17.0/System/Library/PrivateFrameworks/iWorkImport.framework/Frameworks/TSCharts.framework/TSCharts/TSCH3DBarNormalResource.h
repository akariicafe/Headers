@class TSCH3DBarExtrusionGeometry;

@interface TSCH3DBarNormalResource : TSCH3DAbstractBarNormalResource {
    TSCH3DBarExtrusionGeometry *_geometry;
}

- (void).cxx_destruct;
- (id)get;
- (id)initWithGeometry:(id)a0;

@end
