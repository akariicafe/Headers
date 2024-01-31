@interface TSCH3DGetBoundsRenderProcessor : TSCH3DTransformGeometryRenderProcessor {
    struct ObjectBounds { struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _min; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _max; } _bounds; struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _min; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _max; } _projected; struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _min; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _max; } _2DProjected; struct vector<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>>, std::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>>>> { void *__begin_; void *__end_; struct __compressed_pair<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>> *, std::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>>>> { void *__value_; } __end_cap_; } _boxes; } _bounds;
}

@property (nonatomic) int mode;
@property (readonly, nonatomic) const void *bounds;

- (id)init;
- (void)submit:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)extend2DProjectedBounds:(void *)a0;
- (void)resetBounds;

@end
