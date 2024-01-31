@interface ShotflowDetectorANFDv1 : ShotflowDetector

+ (id)filterThresholds;
+ (id)supportedLabelKeys;
+ (Class)shotflowNetworkClass;

- (id)initWithNetwork:(id)a0;
- (id)processBoxes:(id)a0 withHeight:(float)a1 andWidth:(float)a2;
- (id)initWithNetwork:(id)a0 filterThresholds:(id)a1;
- (id)nmsBoxes:(id)a0;

@end
