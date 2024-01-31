@class NSString, CLSSignalNode;

@interface CLSTrendsSceneModel : NSObject <CLSClassificationBasedSignalModel>

@property (class, readonly) NSString *name;
@property (class, readonly) unsigned long long latestVersion;

@property (readonly) CLSSignalNode *aircraftNode;
@property (readonly) CLSSignalNode *airplaneNode;
@property (readonly) CLSSignalNode *birdNode;
@property (readonly) CLSSignalNode *flowerNode;
@property (readonly) CLSSignalNode *forestNode;
@property (readonly) CLSSignalNode *rainbowNode;
@property (readonly) CLSSignalNode *skateboardingNode;
@property (readonly) CLSSignalNode *skyscraperNode;
@property (readonly) CLSSignalNode *snowNode;
@property (readonly) CLSSignalNode *sunsetSunriseNode;
@property (readonly) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)baseSceneAnalysisVersionWithSceneAnalysisVersion:(unsigned long long)a0;

- (id)initForTesting;
- (id)modelInfo;
- (void).cxx_destruct;
- (id)initWithSceneAnalysisVersion:(unsigned long long)a0;
- (BOOL)isResponsibleForSignalIdentifier:(unsigned long long)a0;
- (id)nodeForSignalIdentifier:(unsigned long long)a0;
- (void)processSignals:(id)a0 intoProcessedSignals:(id)a1;
- (void)setupVersion33;
- (void)setupVersion80;
- (void)setupVersion84;

@end
