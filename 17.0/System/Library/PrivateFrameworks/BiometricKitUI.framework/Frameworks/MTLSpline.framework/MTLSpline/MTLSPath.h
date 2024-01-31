@interface MTLSPath : NSObject {
    float _strokeWeight;
    struct vector<ControlPoint, std::allocator<ControlPoint>> { struct ControlPoint *__begin_; struct ControlPoint *__end_; struct __compressed_pair<ControlPoint *, std::allocator<ControlPoint>> { struct ControlPoint *__value_; } __end_cap_; } _controlPointsVector;
    struct vector<PatchInfo, std::allocator<PatchInfo>> { struct PatchInfo *__begin_; struct PatchInfo *__end_; struct __compressed_pair<PatchInfo *, std::allocator<PatchInfo>> { struct PatchInfo *__value_; } __end_cap_; } _patchInfoVector;
    struct vector<unsigned short, std::allocator<unsigned short>> { unsigned short *__begin_; unsigned short *__end_; struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> { unsigned short *__value_; } __end_cap_; } _indicesVector;
    struct vector<InstanceInfo, std::allocator<InstanceInfo>> { struct InstanceInfo *__begin_; struct InstanceInfo *__end_; struct __compressed_pair<InstanceInfo *, std::allocator<InstanceInfo>> { struct InstanceInfo *__value_; } __end_cap_; } _instancesVector;
    struct vector<simd_float4x4, std::allocator<simd_float4x4>> { struct *__begin_; struct *__end_; struct __compressed_pair<simd_float4x4 *, std::allocator<simd_float4x4>> { struct *__value_; } __end_cap_; } _collapsedTransforms;
}

@property (readonly) struct ControlPoint { float x0; } *controlPoints;
@property (readonly) unsigned long long controlPointsCount;
@property (readonly) struct PatchInfo { } *patchInfo;
@property (readonly) unsigned long long patchInfoCount;
@property (readonly) unsigned short *indices;
@property (readonly) unsigned long long indicesCount;
@property (readonly) struct InstanceInfo { struct { void /* unknown type, empty encoding */ x0[4]; } x0; } *instances;
@property (readonly) unsigned long long instanceCount;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)appendInstances:(struct InstanceInfo { struct { void /* unknown type, empty encoding */ x0[4]; } x0; } *)a0 count:(unsigned long long)a1;
- (void)clearInstances;
- (id)initWithPoints:(id)a0 colors:(SEL)a1 count:(void *)a2 strokeWeight:(void *)a3 pattern:(unsigned long long)a4 rotation:(float)a5 scale:(unsigned long long)a6 translation:(struct AxisAngle { float x0; })a7;
- (void)genLeftCapWithWidth:(float)a0;
- (void)genRightCapWithWidth:(float)a0;
- (void /* unknown type, empty encoding */)interpolateTangentWithPoints:(void /* unknown type, empty encoding */[4])a0 t:(float)a1;
- (void)appendControlPoints:(struct ControlPoint { float x0; } *)a0 count:(unsigned long long)a1;
- (void)appendIndices:(unsigned short *)a0 count:(unsigned long long)a1;
- (void)appendPatchInfo:(struct PatchInfo { } *)a0 count:(unsigned long long)a1;
- (void)collapseTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (unsigned long long)controlPointsVectorCount;
- (struct ControlPoint { float x0; } *)controlPointsVectorData;
- (void)genIndicesWithPattern:(unsigned long long)a0;
- (unsigned long long)indicesVectorCount;
- (unsigned short *)indicesVectorData;
- (id)initWithPoints:(id)a0 count:(SEL)a1 strokeWeight:(void *)a2 pattern:(unsigned long long)a3 rotation:(float)a4 scale:(unsigned long long)a5 translation:(struct AxisAngle { float x0; })a6;
- (unsigned long long)instanceInfoVectorCount;
- (struct InstanceInfo { struct { void /* unknown type, empty encoding */ x0[4]; } x0; } *)instanceInfoVectorData;
- (void /* unknown type, empty encoding */)interpolateWithPoints:(void /* unknown type, empty encoding */[4])a0 t:(float)a1;
- (unsigned long long)patchInfoVectorCount;
- (struct PatchInfo { } *)patchInfoVectorData;

@end
