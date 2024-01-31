@interface MDLVoxelArray : MDLObject {
    struct unordered_map<unsigned long long, int, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, int>>> { struct __hash_table<std::__hash_value_type<unsigned long long, int>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, int>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, int>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, int>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, int>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, int>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, int>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, int>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, int>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, int>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, int>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { float __value_; } __p3_; } __table_; } _voxels;
    struct MDLAABB { void /* unknown type, empty encoding */ maxBounds; void /* unknown type, empty encoding */ minBounds; } _bounds;
    float _voxelExtent;
    struct MortonCode { struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *__value_; } __end_cap_; } mortonkeyX; struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *__value_; } __end_cap_; } mortonkeyY; struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *__value_; } __end_cap_; } mortonkeyZ; } mortonCoder;
    struct unique_ptr<ModelIO::Octree, std::default_delete<ModelIO::Octree>> { struct __compressed_pair<ModelIO::Octree *, std::default_delete<ModelIO::Octree>> { struct Octree *__value_; } __ptr_; } _octreeData;
    BOOL _levelSet;
    void /* unknown type, empty encoding */ _originatingOffset;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ minimumExtent; void /* unknown type, empty encoding */ maximumExtent; } voxelIndexExtent;
@property (readonly, nonatomic) struct { } boundingBox;
@property (readonly, nonatomic) BOOL isValidSignedShellField;
@property (nonatomic) float shellFieldInteriorThickness;
@property (nonatomic) float shellFieldExteriorThickness;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)voxelExistsAtIndex:(SEL)a0 allowAnyX:(BOOL)a1 allowAnyY:(BOOL)a2 allowAnyZ:(BOOL)a3 allowAnyShell:(BOOL)a4;
- (struct vector<int, std::allocator<int>> { int *x0; int *x1; struct __compressed_pair<int *, std::allocator<int>> { int *x0; } x2; })boxesPerLayer;
- (id)coarseMesh;
- (id)coarseMeshUsingAllocator:(id)a0;
- (id)coarseVoxelMeshWithStyle:(unsigned long long)a0;
- (void)convertToSignedShellField;
- (void)differenceWithVoxels:(id)a0;
- (void)dilateNarrowBandInteriorWidthTo:(float)a0 AndExteriorWidthTo:(float)a1;
- (void)erodeNarrowBandInteriorWidthTo:(float)a0 AndExteriorWidthTo:(float)a1 selector:(SEL)a2;
- (void /* unknown type, empty encoding */)indexOfSpatialLocation:(SEL)a0;
- (id)initWithAsset:(id)a0 divisions:(int)a1 interiorNBWidth:(float)a2 exteriorNBWidth:(float)a3 patchRadius:(float)a4;
- (id)initWithAsset:(id)a0 divisions:(int)a1 interiorShells:(int)a2 exteriorShells:(int)a3 patchRadius:(float)a4;
- (id)initWithAsset:(id)a0 divisions:(int)a1 patchRadius:(float)a2;
- (id)initWithData:(id)a0 boundingBox:(struct { })a1 voxelExtent:(float)a2;
- (void)intersectWithVoxels:(id)a0;
- (id)meshUsingAllocator:(id)a0;
- (void)recalculateExtents;
- (void)setVoxelAtIndex:(SEL)a0;
- (void)setVoxelsForMesh:(id)a0 divisions:(int)a1 interiorNBWidth:(float)a2 exteriorNBWidth:(float)a3 patchRadius:(float)a4;
- (void)setVoxelsForMesh:(id)a0 divisions:(int)a1 interiorShells:(int)a2 exteriorShells:(int)a3 patchRadius:(float)a4;
- (void)setVoxelsForMesh:(id)a0 divisions:(int)a1 patchRadius:(float)a2;
- (void /* unknown type, empty encoding */)spatialLocationOfIndex:(SEL)a0;
- (void)unionWithVoxels:(id)a0;
- (struct { })voxelBoundingBoxAtIndex:(SEL)a0;
- (id)voxelIndices;
- (id)voxelsWithinExtent:(struct { })a0;

@end
