@interface ShotflowDetectorANODv5 : ShotflowDetectorANODBase

@property (nonatomic) float petFaceThreshold;
@property (nonatomic) float faceBodyDistanceThreshold;

+ (id)filterThresholds;
+ (id)supportedLabelKeys;
+ (Class)shotflowNetworkClass;

- (id)initWithNetwork:(id)a0;
- (id)processBoxes:(id)a0 withHeight:(float)a1 andWidth:(float)a2;
- (id)initWithNetwork:(id)a0 filterThresholds:(id)a1;
- (id)getIndexBoxes:(id)a0 filterThresholdIndex:(unsigned long long)a1;
- (id)nmsBoxes:(id)a0;
- (id)analyzePetFaces:(id)a0;
- (id)groupFaceBody:(id)a0;

@end
