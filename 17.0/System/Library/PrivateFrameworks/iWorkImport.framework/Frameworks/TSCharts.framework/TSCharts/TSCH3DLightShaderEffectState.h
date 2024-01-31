@class NSMutableArray;

@interface TSCH3DLightShaderEffectState : NSObject <NSCopying> {
    NSMutableArray *_lights;
    struct LightingPackageShaderEffectState { struct array<glm::detail::tmat4x4<float>, 2UL> { struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } __elems_[2]; } transforms; } _packageState;
}

+ (id)effectState;

- (id)init;
- (unsigned long long)hash;
- (void)removeAllObjects;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (void)setPackageState:(const void *)a0;
- (id).cxx_construct;
- (const void *)packageState;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
