@interface ARCoachingSplineGroup : NSObject {
    struct vector<ARCoachingControlPoint, std::allocator<ARCoachingControlPoint>> { struct *__begin_; struct *__end_; struct __compressed_pair<ARCoachingControlPoint *, std::allocator<ARCoachingControlPoint>> { struct *__value_; } __end_cap_; } _controlPoints;
    struct vector<ARCoachingPatchData, std::allocator<ARCoachingPatchData>> { struct *__begin_; struct *__end_; struct __compressed_pair<ARCoachingPatchData *, std::allocator<ARCoachingPatchData>> { struct *__value_; } __end_cap_; } _patchData;
    struct vector<unsigned short, std::allocator<unsigned short>> { unsigned short *__begin_; unsigned short *__end_; struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> { unsigned short *__value_; } __end_cap_; } _indices;
}

@property (readonly, nonatomic) struct { float x0; } *controlPoints;
@property (readonly, nonatomic) unsigned int numControlPoints;
@property (readonly, nonatomic) struct { } *patchData;
@property (readonly, nonatomic) unsigned int patchDataLength;
@property (readonly, nonatomic) unsigned short *indices;
@property (readonly, nonatomic) unsigned int numIndices;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSplines:(id)a0;

@end
