@class NSArray, NSDictionary, __end_cap_, __end_;

@interface VGFrameSelector : NSObject {
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _angles;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _angularVectors;
    struct vector<VGCapturedPose *, std::allocator<VGCapturedPose *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<VGCapturedPose *__strong *, std::allocator<VGCapturedPose *>> { id *__value_; } x1; } _selectedPoses;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _viewDirVectors;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _angularMinAlignments;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _angularBestAlignments;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _angularBestScores;
    long long _motionType;
    int _frontPoseIdx;
    NSArray *_expressionFilters;
    NSArray *_frontExpressionFilters;
    BOOL _useSimpleSelector;
    float _simpleSelectorMinAlignment;
    float _simpleSelectorMaxAlignment;
}

@property (readonly, nonatomic) NSDictionary *results;
@property (readonly, nonatomic) unsigned long long requiredPosesCount;
@property (readonly, nonatomic) unsigned long long remainingPosesCount;
@property (readonly, nonatomic) BOOL completed;

+ (id)invalidPose;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initForPosesCount:(unsigned long long)a0 limit:(float)a1 motionType:(long long)a2 expressionFilters:(id)a3;
- (id)initForPosesCount:(unsigned long long)a0 limit:(float)a1 motionType:(long long)a2 expressionFilters:(id)a3 options:(id)a4;
- (id)processCaptureData:(id)a0 trackingData:(id)a1 framePose:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (id)processViewDirInternal:(SEL)a0 trackingData:(id)a1 frameTimestampMS:(unsigned long long)a2 selectorName:(id)a3;
- (id)processViewDirSimple:(SEL)a0 frameTimestampMS:(unsigned long long)a1 selectorName:(id)a2;
- (id)selectedValidPoses;

@end
