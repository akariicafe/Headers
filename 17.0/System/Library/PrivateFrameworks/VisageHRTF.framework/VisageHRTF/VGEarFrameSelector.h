@class NSMutableDictionary, VGEarPoseDetector, VGFrameSelector, VGEarCaptureOptions;

@interface VGEarFrameSelector : NSObject {
    VGEarPoseDetector *_earPoseDetector;
    VGFrameSelector *_leftEarYawSelector;
    VGFrameSelector *_leftEarPitchSelector;
    VGFrameSelector *_rightEarYawSelector;
    VGFrameSelector *_rightEarPitchSelector;
    BOOL _selectionCompleted;
    unsigned long long _frameCount;
    unsigned long long _rightFrameCount;
    unsigned long long _leftFrameCount;
    VGEarCaptureOptions *_options;
    BOOL _hasPreviousLandmarks;
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__value_; } __end_cap_; } _previousLandmarksCoords;
    unsigned long long _previousFrameTimestampMS;
}

@property (readonly, nonatomic) NSMutableDictionary *leftEarEnrolledYawToBoundingBox;
@property (readonly, nonatomic) NSMutableDictionary *rightEarEnrolledYawToBoundingBox;

+ (id)defaultModelsPath;

- (id)init;
- (id).cxx_construct;
- (id)currentState;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)enrolledPoses;
- (id)addPoseWithCaptureData:(id)a0;
- (id)allPoseSelectors;
- (float)getMotionBlurScoreFromLandmarks:(struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })a0 isEarDetected:(BOOL)a1 frameTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)initWithModelsPath:(id)a0;
- (id)initWithModelsPath:(id)a0 options:(id)a1;
- (id)leftEarEnrolledPoses;
- (id)posesFromSelectors:(id)a0;
- (id)rightEarEnrolledPoses;
- (void)writeToPath:(id)a0;

@end
