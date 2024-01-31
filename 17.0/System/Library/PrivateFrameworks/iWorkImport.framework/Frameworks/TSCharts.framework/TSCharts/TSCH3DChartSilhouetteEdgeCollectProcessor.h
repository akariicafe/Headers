@class TSCH3DResource, TSCH3Dvec3DataBuffer;

@interface TSCH3DChartSilhouetteEdgeCollectProcessor : TSCH3DRetargetRenderProcessor {
    struct EdgeDetectionParameters { BOOL detectSilhouetteEdges; BOOL detectSharpEdges; float sharpEdgeThreshold; } _edgeDetectionParameters;
}

@property (retain, nonatomic) TSCH3DResource *vertices;
@property (readonly, nonatomic) TSCH3Dvec3DataBuffer *edges;

- (void)submit:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)matrix;
- (long long)attribute:(id)a0 resource:(id)a1 specs:(const struct AttributeSpecs { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a2;
- (id)initWithEdgeDetectionParameters:(const struct EdgeDetectionParameters { BOOL x0; BOOL x1; float x2; } *)a0;

@end
