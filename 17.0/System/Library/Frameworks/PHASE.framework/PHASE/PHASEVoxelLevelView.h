@class PHASEEngine;

@interface PHASEVoxelLevelView : NSObject

@property (weak, nonatomic) PHASEEngine *engine;
@property (nonatomic) struct Handle64 { unsigned long long mData; } geoShapeHandle;
@property (nonatomic) long long subtreeIndex;
@property (nonatomic) long long levelIndex;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ dimensions;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ offset;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ voxelSize;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)getVoxelsWithCallback:(id /* block */)a0;
- (id)initWithEngine:(id)a0 shapeHandle:(struct Handle64 { unsigned long long x0; })a1 voxelTreeInfo:(const void *)a2 subtreeIndex:(long long)a3 levelIndex:(long long)a4;

@end
