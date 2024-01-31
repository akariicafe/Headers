@interface TSCH3DAreaGeometry : TSCH3DGeometry {
    struct vector<glm::detail::tvec3<float>, std::allocator<glm::detail::tvec3<float>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::detail::tvec3<float> *, std::allocator<glm::detail::tvec3<float>>> { void *__value_; } __end_cap_; } _topLine;
    struct vector<glm::detail::tvec3<float>, std::allocator<glm::detail::tvec3<float>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::detail::tvec3<float> *, std::allocator<glm::detail::tvec3<float>>> { void *__value_; } __end_cap_; } _bottomLine;
    unsigned int _capOffset;
    int _capCount;
}

@property (nonatomic) float minZ;
@property (nonatomic) float maxZ;
@property (nonatomic) float zeroValue;
@property (nonatomic) BOOL stacked;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const void *)topLine;
- (const void *)bottomLine;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })bottomTopAtPosition:(float)a0;
- (unsigned int)capCount;
- (unsigned int)capOffset;
- (id)elementsBoundsPositions;
- (void)generateArrays;
- (int)geometryCount;
- (id)selectionKnobPositions;
- (void)setTopLine:(const void *)a0 bottomLine:(const void *)a1 zeroValue:(float)a2;

@end
