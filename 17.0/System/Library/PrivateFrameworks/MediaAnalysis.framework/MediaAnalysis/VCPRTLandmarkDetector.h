@interface VCPRTLandmarkDetector : NSObject {
    struct LandmarkDetector { int x0; int x1; int x2; int x3; int x4; int x5; int x6; BOOL x7; float *x8; float *x9; float *x10; int *x11; struct ZPoint *x12; struct RegressionTree *x13; void /* function */ *x14; } *_internalLandmarkDetector;
    int _numOfLandmarks;
}

- (void)dealloc;
- (void)calculateFaceRectFromPrevLM:(float *)a0 result:(float *)a1 numOfLandmarks:(int)a2;
- (void)detectLandmark:(char *)a0 width:(int)a1 height:(int)a2 stride:(int)a3 facerect:(float *)a4 prevResult:(float *)a5 result:(float *)a6;
- (id)initFromConfigFile:(id)a0 numStage:(int)a1 numLandmarks:(int)a2 numTreePerStage:(int)a3 depthOfTree:(int)a4 numFeatures:(int)a5;

@end
