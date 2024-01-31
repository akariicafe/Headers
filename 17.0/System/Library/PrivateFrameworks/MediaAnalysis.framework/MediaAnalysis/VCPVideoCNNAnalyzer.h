@class VCPVideoCaptionEncoder, VCPVideoPersonDetector, NSString, VCPVideoCNNCameraMotion, VCPVideoCNNQuality, VCPVideoCNNBackbone, NSMutableArray, VCPVideoEmbeddings, VCPVideoCNNAutoplay, VCPVideoCNNHighlight, VCPTransforms;

@interface VCPVideoCNNAnalyzer : VCPVideoAnalyzer {
    VCPVideoCNNBackbone *_backbone;
    VCPVideoCaptionEncoder *_videoLanguageBackbone;
    VCPTransforms *_transformImage;
    NSMutableArray *_tasks;
    NSMutableArray *_postTasks;
    NSMutableArray *_privateTasks;
    VCPVideoEmbeddings *_videoEmbeddings;
    float *_inputData;
    float *_inputDataSettling;
    int _inputWidth;
    int _inputHeight;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastProcess;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastDetection;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeStart;
    int _validFrames;
    int _validFramesSettling;
    BOOL _enoughFrames;
    BOOL _enoughFramesSettling;
    VCPVideoPersonDetector *_personDetector;
    NSString *_resConfig;
    VCPVideoCNNAutoplay *_autoplay;
    VCPVideoCNNCameraMotion *_cameraMotion;
    VCPVideoCNNQuality *_quality;
    VCPVideoCNNHighlight *_highlight;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _regionCrop;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeEnd;
    BOOL _postInference;
    float _minProcessingInterval;
    float _photoOffset;
}

+ (BOOL)forcePersonDetection;
+ (BOOL)isMLHighlightEnabled;
+ (BOOL)isMLSettlingEffectPregatingEnabled;

- (void)dealloc;
- (id)results;
- (void).cxx_destruct;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3;
- (int)configForAspectRatio:(float)a0;
- (int)copyImage:(struct __CVBuffer { } *)a0 withChannels:(int)a1 settling:(BOOL)a2;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)initWithTimeOfInteret:(id)a0 frameRate:(float)a1 isLivePhoto:(BOOL)a2 phFaces:(id)a3 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a4 withEmbeddings:(id)a5 requestedAnalyses:(unsigned long long)a6 photoOffset:(float)a7;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })isAnalysisResultNeeded:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (int)loadAnalysisResults:(id)a0 audioResults:(id)a1;
- (int)loadAnalysisResultsFrom:(id)a0 actionAnalyzer:(id)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)privateResults;
- (int)runTasks:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 persons:(id)a2 regionCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

@end
