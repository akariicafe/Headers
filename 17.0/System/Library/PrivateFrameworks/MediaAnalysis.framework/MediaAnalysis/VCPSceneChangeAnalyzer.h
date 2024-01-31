@class VCPSceneChangeSegment, NSMutableArray;

@interface VCPSceneChangeAnalyzer : VCPVideoAnalyzer {
    float _sceneDeltaBuffer[10];
    struct FrameBuffer { int frame_count_; struct Frame { int frame_idx_; struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp_; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration_; struct Translation { float x_; float y_; float z_; } ave_motion_; struct Translation { float x_; float y_; float z_; } org_motion_; float quality_score_; unsigned long long distortion_; float distortion_norm_; struct Translation { float x_; float y_; float z_; } motion_change_; unsigned int compressed_bytes_; BOOL blur_; struct Translation { float x_; float y_; float z_; } acc_var_; float texture_; struct MotionResult { float significant_values_[6]; float confidence_[6]; float fine_action_score_; float action_score_; float track_score_; float rotation_angle_; float subtle_motion_score_; BOOL is_stable_; int action_blocks_; float action_motion_; BOOL valid_mb_; BOOL valid_submb_; int support_size_; float residual_var_; float gmv_[2]; struct array<float, 6UL> { float __elems_[6]; } motion_param_; struct array<float, 6UL> { float __elems_[6]; } motion_param_diff_; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration_; float scene_delta_; float scene_delta_ratio_; struct Vector<ma::Object *> { struct __CFArray *vector_; } objects_; struct Vector<ma::Object *> { struct __CFArray *vector_; } detect_objects_; struct Vector<ma::Object *> { struct __CFArray *vector_; } imported_objects_; } motion_result_; float *flow_; float interestingness_; float obstruction_; float colorfulness_score_; struct Histogram { float extremities_; float overexposes_; int *histogram_[3]; int *moments_hist_[2]; } histogram_; } buffer_[35]; } _frameBuffer;
    VCPSceneChangeSegment *_activeSegment;
    NSMutableArray *_sceneSegments;
    BOOL _verbose;
    BOOL _firstFrame;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _frameTimeRange;
    BOOL _currentStatus;
    BOOL _isSegmentPoint;
}

- (id)init;
- (id).cxx_construct;
- (id)results;
- (void).cxx_destruct;
- (void)ComputeSceneDelta:(void *)a0;
- (void)PrintSegments;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3;
- (BOOL)decideLensSwitchPoint:(void *)a0;
- (int)finalizeAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (BOOL)isSegmentPoint;

@end
