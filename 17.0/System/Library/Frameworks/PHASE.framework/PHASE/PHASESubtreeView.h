@class PHASEEngine, NSArray;

@interface PHASESubtreeView : NSObject

@property (weak, nonatomic) PHASEEngine *engine;
@property (nonatomic) struct Handle64 { unsigned long long mData; } geoShapeHandle;
@property (nonatomic) long long subtreeIndex;
@property (readonly, nonatomic) NSArray *levels;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEngine:(id)a0 shapeHandle:(struct Handle64 { unsigned long long x0; })a1 voxelTreeInfo:(const void *)a2 subtreeIndex:(long long)a3;

@end
