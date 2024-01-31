@class NSArray, AXShotflowNetwork;

@interface AXShotflowDetector : NSObject {
    AXShotflowNetwork *_network;
}

@property (nonatomic) float overlap_threshold;
@property (nonatomic) float threshold;
@property (retain, nonatomic) NSArray *filterThreshold;
@property (nonatomic) float nmsThreshold;
@property (nonatomic) float mergeHeadsThreshold;
@property (nonatomic) float osfsThreshold;
@property (nonatomic) float osfsSizeRatio;
@property (nonatomic) float olmcsThreshold;
@property (nonatomic) int olmcsMergeCountDelta;
@property (nonatomic) float smartThreshold;
@property (nonatomic) float smartDistanceFactor;

+ (id)cpuDetectorWithModelPath:(id)a0 configuration:(id)a1 version:(int)a2;
+ (id)gpuDetectorWithModelPath:(id)a0 configuration:(id)a1 preferredMetalDeviceID:(int)a2 version:(int)a3 modelType:(long long)a4;

- (id)processBoxes:(id)a0 withHeight:(float)a1 andWidth:(float)a2;
- (void).cxx_destruct;
- (id)nmsBoxes:(id)a0;
- (id)enforceSquareFaces:(id)a0 withHeight:(float)a1 andWidth:(float)a2;
- (id)filterBoxes:(id)a0;
- (id)mergeBoxes:(id)a0;
- (id)mergeHeadsBoxes:(id)a0;
- (id)overlappingLowMergeCountSuppression:(id)a0;
- (id)overlappingSmallFacesSuppression:(id)a0;
- (id)smartMergeBoxes:(id)a0;
- (id)detect:(id)a0;
- (id)initWithNetwork:(id)a0 nmsThreshold:(float)a1 filterThreshold:(id)a2;

@end
