@class VCPMotionFlowAnalyzer, NSArray, VCPFrameScoreFilter, VCPMotionFlowSubtleMotionAnalyzer, NSMutableDictionary, NSDictionary, VCPFrameAnalysisStats, VCPVideoEmbeddings;

@interface VCPFullVideoAnalyzer : VCPVideoAnalyzer {
    void *_encodeAnalysis;
    void *_preencodeAnalysis;
    void *_obstructionAnalysis;
    void *_sceneAnalysis;
    struct MotionFilter { struct FrameBuffer *x0; BOOL x1; BOOL x2; } *_motionFilter;
    struct MetaDataAnalysis { BOOL x0; struct FrameBuffer *x1; struct Translation { float x0; float x1; float x2; } x2; struct Translation { float x0; float x1; float x2; } x3; } *_metadataAnalysis;
    struct IrisAnalysis { float x0; float x1; int x2; int x3; BOOL x4; struct __CFArray *x5; } *_irisAnalysis;
    struct FrameBuffer { int frame_count_; struct Frame { int frame_idx_; struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp_; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration_; struct Translation { float x_; float y_; float z_; } ave_motion_; struct Translation { float x_; float y_; float z_; } org_motion_; float quality_score_; unsigned long long distortion_; float distortion_norm_; struct Translation { float x_; float y_; float z_; } motion_change_; unsigned int compressed_bytes_; BOOL blur_; struct Translation { float x_; float y_; float z_; } acc_var_; float texture_; struct MotionResult { float significant_values_[6]; float confidence_[6]; float fine_action_score_; float action_score_; float track_score_; float rotation_angle_; float subtle_motion_score_; BOOL is_stable_; int action_blocks_; float action_motion_; BOOL valid_mb_; BOOL valid_submb_; int support_size_; float residual_var_; float gmv_[2]; struct array<float, 6UL> { float __elems_[6]; } motion_param_; struct array<float, 6UL> { float __elems_[6]; } motion_param_diff_; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration_; float scene_delta_; float scene_delta_ratio_; struct Vector<ma::Object *> { struct __CFArray *vector_; } objects_; struct Vector<ma::Object *> { struct __CFArray *vector_; } detect_objects_; struct Vector<ma::Object *> { struct __CFArray *vector_; } imported_objects_; } motion_result_; float *flow_; float interestingness_; float obstruction_; float colorfulness_score_; struct Histogram { float extremities_; float overexposes_; int *histogram_[3]; int *moments_hist_[2]; } histogram_; } buffer_[35]; } _frameBuffer;
    struct Histogram { float extremities_; float overexposes_; int *histogram_[3]; int *moments_hist_[2]; } _idealHistogram;
    BOOL _isTimelapse;
    BOOL _isIris;
    BOOL _isSlowMo;
    int _orientation;
    BOOL _finalized;
    BOOL _hasInterestingScene;
    BOOL _isCaptureAnalysis;
    NSMutableDictionary *_privateResults;
    VCPFrameAnalysisStats *_videoFrameAnalysis;
    VCPVideoEmbeddings *_videoEmbeddings;
    VCPFrameScoreFilter *_trackScoreFilter;
    NSDictionary *_metaMotionResults;
    BOOL _faceDominated;
    BOOL _useMoflow;
    VCPMotionFlowSubtleMotionAnalyzer *_subtleMotionAnalyzer;
    VCPMotionFlowAnalyzer *_motionFlowAnalyzer;
    int _sceneType;
}

@property float qualityScore;
@property float actionScore;
@property float interestingnessScore;
@property float obstructionScore;
@property float trackingScore;
@property (readonly, nonatomic) NSDictionary *objectsMotion;
@property (readonly, nonatomic) NSArray *globalMotion;

+ (BOOL)enableMoflow;
+ (BOOL)useSceneprintInSceneAnalysis;

- (void)dealloc;
- (id).cxx_construct;
- (id)results;
- (void).cxx_destruct;
- (int)process:(int)a0;
- (id)initWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 properties:(id)a3 flags:(unsigned long long *)a4 cancel:(id /* block */)a5;
- (void)processAndEstimateQualityScore:(void *)a0;
- (int)addResult:(struct __CFArray { } *)a0 to:(id)a1 forKey:(id)a2 optional:(BOOL)a3;
- (int)addSceneAnalysisResult:(id)a0 to:(id)a1 clipRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (int)addSceneAnalysisResult:(id)a0 to:(id)a1 optional:(BOOL)a2;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3 cancel:(id /* block */)a4;
- (id)clipResults:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)computeExposureScoreOfFrame:(void *)a0;
- (float)estimateExpressionScore:(id)a0 encodeStats:(struct EncodeStats { void /* function */ **x0; BOOL *x1; BOOL *x2; struct MotionVector *x3; struct MotionVector *x4; struct MotionVector *x5; struct MotionVector *x6; unsigned short *x7; unsigned short *x8; unsigned int *x9; unsigned short *x10; unsigned short *x11; unsigned short *x12; unsigned short *x13; unsigned short *x14; unsigned short *x15; unsigned short *x16; unsigned short *x17; unsigned short *x18; unsigned short *x19; unsigned short *x20; unsigned int x21; BOOL x22; BOOL x23; BOOL x24; int x25; int x26; } *)a1 frameWidth:(int)a2 frameHeight:(int)a3;
- (float)estimateQualityScore:(void *)a0;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (float)getSceneSwichFrequency;
- (id)initWithVideoTrack:(id)a0 withMetaOrientation:(id)a1 withPrivateResults:(id)a2 withFrameStats:(id)a3 withEmbeddings:(id)a4 isTimelapse:(BOOL)a5 isIris:(BOOL)a6 irisPhotoOffsetSec:(float)a7 irisPhotoExposureSec:(float)a8 slowMoRate:(float)a9 faceDominated:(BOOL)a10;
- (int)isStableMetaMotion:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)prepareLivePhotoAnalysisByScenes:(id)a0;
- (void)prepareVideoAnalysisByScenes:(id)a0;
- (id)privateResults;
- (id)processSceneResults;
- (void)reviseFrameTrackScore:(void *)a0 saliencyRegions:(id)a1;
- (int)seedAnalyzersWithPixelBuffer:(struct __CVBuffer { } *)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setNextCaptureFrame:(struct __CVBuffer { } *)a0;

@end
