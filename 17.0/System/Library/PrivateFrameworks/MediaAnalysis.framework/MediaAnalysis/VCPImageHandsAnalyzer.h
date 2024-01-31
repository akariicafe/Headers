@class VCPANSTHandsDetector, NSArray, VCPCNNHandKeypointsDetector, NSString, VCPCNNHandsDetector, NSMutableArray;

@interface VCPImageHandsAnalyzer : VCPImageAnalyzer {
    int _maxNumRegions;
    int _inputWidth;
    int _inputHeight;
    int _sourceWidth;
    int _sourceHeight;
    float _inset;
    VCPANSTHandsDetector *_anstHandsDetector;
    float _extendRatio;
    VCPCNNHandsDetector *_handsDetector;
    VCPCNNHandKeypointsDetector *_handsKeypointsDetector;
    NSMutableArray *_results;
    NSString *_resConfig;
    BOOL _enableRejectHandsNearBoundaries;
}

@property (retain) NSArray *handObjects;
@property BOOL optimizeForDistance;

+ (float)getExtendRatio;
+ (float)getInsetForRejectingHands;

- (id)init;
- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 rotationInDegrees:(id)a1 flags:(unsigned long long *)a2 results:(id *)a3 cancel:(id /* block */)a4;
- (int)configForAspectRatio:(id)a0;
- (int)convertSingleResultToDict:(struct CGPoint { double x0; double x1; }[21])a0 keypointConfidence:(float *)a1 box:(id)a2 results:(id)a3;
- (long long)getClosestAspectRatio:(id)a0;
- (id)initWithKeypointsOption:(int)a0 forceCPU:(BOOL)a1 sharedModel:(BOOL)a2 enableHandDetection:(BOOL)a3 enableANSTHandDetection:(BOOL)a4 enableRejectHandsNearBoundaries:(BOOL)a5 sourceWidth:(int)a6 sourceHeight:(int)a7 modelName:(id)a8 revision:(int)a9;
- (BOOL)keypointsOutsideInset:(struct CGPoint { double x0; double x1; }[21])a0 handRegion:(id)a1;
- (int)preferredInputFormat:(int *)a0 height:(int *)a1 format:(unsigned int *)a2;
- (int)updateMaxNumHands:(id)a0;
- (int)updateModelForSourceWidth:(int)a0 sourceHeight:(int)a1;

@end
