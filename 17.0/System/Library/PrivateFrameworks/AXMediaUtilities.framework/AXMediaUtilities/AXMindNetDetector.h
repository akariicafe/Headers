@class NSArray, AXMindNetNetwork;

@interface AXMindNetDetector : NSObject {
    AXMindNetNetwork *_network;
}

@property (nonatomic) float overlap_threshold;
@property (nonatomic) float threshold;
@property (retain, nonatomic) NSArray *filterThreshold;
@property (nonatomic) float nmsThreshold;

+ (id)detectorWithModelPath:(id)a0 configuration:(id)a1 modelType:(long long)a2;

- (id)processBoxes:(id)a0 withHeight:(float)a1 andWidth:(float)a2;
- (void).cxx_destruct;
- (id)detect:(id)a0;
- (id)initWithNetwork:(id)a0 nmsThreshold:(float)a1 filterThreshold:(id)a2;

@end
