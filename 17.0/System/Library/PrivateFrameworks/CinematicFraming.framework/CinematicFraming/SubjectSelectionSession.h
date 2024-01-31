@class NSString, NSMutableDictionary;

@interface SubjectSelectionSession : NSObject {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastGazeTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastTimestamp;
    float _emptySelectionTimeElapsed;
    float _gazeElapsedThreshold;
    NSMutableDictionary *_lastFaceUpdatedTimestamp;
    NSMutableDictionary *_lastBodyUpdatedTimestamp;
    NSMutableDictionary *_lastUsedFaceRects;
    NSMutableDictionary *_lastUsedBodyRects;
    NSMutableDictionary *_lastGazedFaceRects;
    BOOL _singleSubjectSelection;
    void *_espressoContext;
    void *_espressoPlan;
    struct { void *plan; int network_index; } _espressoNetwork;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _gazeOutput;
    struct CGSize { double width; double height; } _gazeFaceSize;
    struct __CVBuffer { } *_gazeFacePixelBuffer;
    struct OpaqueVTPixelTransferSession { } *_pixelTransferSession;
    NSString *_gazeInputName;
    float _gazeScoreThreshold;
}

@property (nonatomic) BOOL singleSubjectSelection;
@property (nonatomic) BOOL enableGazeSelection;

+ (void)filterDetectedObjects:(id)a0 usedFaceIDs:(id)a1 usedBodyIDs:(id)a2 filteredObjects:(id)a3;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (int)processPixelBuffer:(struct __CVBuffer { } *)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 detectedObjects:(id)a2 usedFaceIDs:(id)a3 usedBodyIDs:(id)a4;
- (void)_convertDetectionArrayToDict:(id)a0 bodyObjects:(id)a1 faceRects:(id)a2 bodyRects:(id)a3;
- (int)_initGaze;
- (void)_pairFaceBody:(id)a0 bodyObjects:(id)a1 face2Body:(id)a2 body2Face:(id)a3;
- (void)_runGazeDetection:(struct __CVBuffer { } *)a0 faceObjects:(id)a1 selectedFaceRects:(id)a2;
- (int)_runGazeInference:(struct __CVBuffer { } *)a0 faceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 gazeScore:(float *)a2;
- (void)_selectAllObjects:(id)a0 bodyObjects:(id)a1 usedFaceIDs:(id)a2 usedBodyIDs:(id)a3;
- (void)_selectPairRects:(id)a0 bodyRects:(id)a1 face2Body:(id)a2 body2Face:(id)a3 selectedFaceRects:(id)a4 selectedBodyRects:(id)a5;
- (void)_selectSingleSubject:(id)a0 bodyRects:(id)a1 selectedFaceRects:(id)a2 selectedBodyRects:(id)a3 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 inputPixelBuffer:(struct __CVBuffer { } *)a5;
- (void)_updateDetectionRects:(id)a0 bodyObjects:(id)a1 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (BOOL)gazeSubjectSelection;
- (void)setGazeSubjectSelection:(BOOL)a0;

@end
