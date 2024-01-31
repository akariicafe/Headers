@class TSCH3DNormalDirectionMapper;

@interface TSCH3DTexCoordGeneration : NSObject {
    struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } _transform;
}

@property (retain, nonatomic) TSCH3DNormalDirectionMapper *normalDirectionMapper;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithTransform:(const void *)a0;

@end
