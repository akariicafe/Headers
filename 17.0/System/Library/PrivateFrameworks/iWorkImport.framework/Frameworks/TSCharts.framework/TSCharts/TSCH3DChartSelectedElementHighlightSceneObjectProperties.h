@class TSCH3Dvec3DataBuffer, TSCH3DPrefilteredLineRenderer;

@interface TSCH3DChartSelectedElementHighlightSceneObjectProperties : NSObject {
    TSCH3Dvec3DataBuffer *edgeVertices;
    TSCH3DPrefilteredLineRenderer *_renderer;
}

@property (retain, nonatomic) TSCH3Dvec3DataBuffer *edgeVertices;
@property (readonly, nonatomic) TSCH3DPrefilteredLineRenderer *renderer;
@property (nonatomic) unsigned long long selectedSeriesIndex;
@property (nonatomic) struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } color;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
