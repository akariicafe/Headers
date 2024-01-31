@interface TSCH3DMatrixRenderProcessor : TSCH3DRetargetRenderProcessor {
    struct StateStack<glm::detail::tmat4x4<float>, 8L> { unsigned long long _index; struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } _current; struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } _stack[8]; } _transformStack;
    struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } _projection;
}

@property (readonly, nonatomic) const void *current;
@property (readonly, nonatomic) const void *projection;
@property (readonly, nonatomic) BOOL transformChanged;
@property (readonly, nonatomic) BOOL projectionChanged;

- (void)replace:(void *)a0;
- (id).cxx_construct;
- (void)translate:(void *)a0;
- (void)scale:(void *)a0;
- (void)multiply:(void *)a0;
- (void)copyProjectionInto:(void *)a0;
- (void)copyTransformInto:(void *)a0;
- (id)normalizedViewAll;
- (void)popMatrix;
- (void)projection:(void *)a0;
- (void)pushMatrix;
- (void)resetChangeFlags;

@end
