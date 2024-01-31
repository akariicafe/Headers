@class TSCH3DLabelsRenderer, TSCH3DExternalLabelAttribute;

@interface TSCH3DLabelsMeshRendererLabelInfo : NSObject

@property (readonly, weak, nonatomic) TSCH3DLabelsRenderer *renderer;
@property (readonly, nonatomic) struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } position;
@property (readonly, nonatomic) struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } translation;
@property (readonly, nonatomic) struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } scale;
@property (readonly, nonatomic) float rotation;
@property (readonly, nonatomic) struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } offset;
@property (readonly, nonatomic) struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } alignmentOffset;
@property (readonly, nonatomic) TSCH3DExternalLabelAttribute *externalAttribute;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithRenderer:(id)a0 position:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })a1 translation:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })a2 scale:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })a3 rotation:(float)a4 offset:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })a5 alignmentOffset:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })a6 externalAttribute:(id)a7;

@end
