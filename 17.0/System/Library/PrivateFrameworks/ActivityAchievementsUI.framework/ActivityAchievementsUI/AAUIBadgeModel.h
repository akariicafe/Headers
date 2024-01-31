@interface AAUIBadgeModel : NSObject

@property (nonatomic) struct { struct aaui_packed_float3 { float x0; float x1; float x2; } x0; struct aaui_packed_float3 { float x0; float x1; float x2; } x1; } *vertices;
@property (nonatomic) unsigned int *indices;
@property (nonatomic) int *groups;
@property (nonatomic) int *materials;
@property (nonatomic) int vertexCount;
@property (nonatomic) int indexCount;
@property (nonatomic) int groupCount;

- (id)initWithPath:(id)a0;
- (void)dealloc;
- (void)_loadModelAtPath:(id)a0 intoVertices:(struct **)a1 indices:(unsigned int **)a2 groups:(int **)a3 materials:(int **)a4 vertexCount:(int *)a5 indexCount:(int *)a6 groupCount:(int *)a7;

@end
