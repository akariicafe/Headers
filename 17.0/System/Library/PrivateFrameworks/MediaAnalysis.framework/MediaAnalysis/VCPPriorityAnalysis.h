@class NSMutableArray, NSArray, VCPCNNHandKeypointsDetector, VCPCNNHandsDetector, NSDate, VCPCNNFastGestureRecognition;

@interface VCPPriorityAnalysis : NSObject {
    float _prevComputedScore;
    int _rotationAngle;
    int _inputHeight;
    int _inputWidth;
    int _frameCounter;
    int _dominantHand;
    struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; struct __compressed_pair<int *, std::allocator<int>> { int *__value_; } __end_cap_; } _handChiralityCounter;
    BOOL _handDetectedInPreviousFrame;
    struct Rotator { struct __CVPixelBufferPool *x0; int x1; int x2; int x3; struct OpaqueVTPixelRotationSession *x4; } *_rotator;
    VCPCNNHandsDetector *_handsDetector;
    VCPCNNHandKeypointsDetector *_handsKeypointsDetector;
    VCPCNNFastGestureRecognition *_fastGestureDetector;
    NSArray *_prevFrameHandKeypoint;
    NSDate *_prevTimeStampHandDetected;
    NSDate *_prevTimeSignLanguageDetected;
    NSDate *_frameEndTimeStamp;
    NSDate *_frameStartTimeStamp;
    NSMutableArray *_classIndexTracker;
    NSMutableArray *_handKeypointTracker;
    NSMutableArray *_leftHandKeypointTracker;
    NSMutableArray *_rightHandKeypointTracker;
    double _singleFrameExecutionTime;
    struct Scaler { struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } pool_; int width_; int height_; unsigned int format_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; } _scaler;
    struct CGPoint { double x; double y; } _prevHandCenter;
}

+ (id)priorityAnalysis;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)addKeypointsToNSArray:(struct CGPoint { double x0; double x1; } *)a0 keypointConfidence:(float[21])a1 handBox:(id)a2 keypointsArray:(id)a3;
- (int)calculatePriorityScore:(float *)a0 ofPixelBuffer:(struct __CVBuffer { } *)a1 withMetadata:(id)a2;
- (int)fastSignLanguageDetection:(float *)a0 ofPixelBuffer:(struct __CVBuffer { } *)a1 withMetadata:(id)a2;

@end
