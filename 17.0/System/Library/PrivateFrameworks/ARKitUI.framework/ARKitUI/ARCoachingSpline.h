@interface ARCoachingSpline : NSObject {
    struct vector<ARCoachingControlPoint, std::allocator<ARCoachingControlPoint>> { struct *__begin_; struct *__end_; struct __compressed_pair<ARCoachingControlPoint *, std::allocator<ARCoachingControlPoint>> { struct *__value_; } __end_cap_; } _controlPoints;
    struct vector<ARCoachingPatchData, std::allocator<ARCoachingPatchData>> { struct *__begin_; struct *__end_; struct __compressed_pair<ARCoachingPatchData *, std::allocator<ARCoachingPatchData>> { struct *__value_; } __end_cap_; } _patchData;
    struct vector<unsigned short, std::allocator<unsigned short>> { unsigned short *__begin_; unsigned short *__end_; struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> { unsigned short *__value_; } __end_cap_; } _indices;
    float _relativeThickness;
    float _cap_error;
}

@property (readonly, nonatomic) struct { float x0; } *controlPoints;
@property (readonly, nonatomic) unsigned int numControlPoints;
@property (readonly, nonatomic) struct { } *patchData;
@property (readonly, nonatomic) unsigned int patchDataLength;
@property (readonly, nonatomic) unsigned short *indices;
@property (readonly, nonatomic) unsigned int numIndices;

+ (void /* unknown type, empty encoding */)interpolate:(id)a0 p1:(SEL)a1 p2:(float)a2 p3:(void /* unknown type, empty encoding */)a3 t:(void /* unknown type, empty encoding */)a4;
+ (void /* unknown type, empty encoding */)interpolateTangent:(id)a0 p1:(SEL)a1 p2:(float)a2 p3:(void /* unknown type, empty encoding */)a3 t:(void /* unknown type, empty encoding */)a4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)genLeftCapWithWidth:(float)a0;
- (void)genRightCapWithWidth:(float)a0;
- (void)genTubeIndicesWithPattern:(unsigned long long)a0;
- (id)initWithPoints:(void *)a0 numPoints:(unsigned int)a1 relativeThickness:(float)a2 pattern:(unsigned long long)a3 mat:(struct { void /* unknown type, empty encoding */ x0[4]; })a4;

@end
