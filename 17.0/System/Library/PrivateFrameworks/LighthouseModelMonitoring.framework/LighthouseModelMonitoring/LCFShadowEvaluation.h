@class LCFFeatureStore, LCFModelStore;

@interface LCFShadowEvaluation : NSObject

@property (readonly, nonatomic) LCFFeatureStore *featureStore;
@property (readonly, nonatomic) LCFModelStore *modelStore;

- (void).cxx_destruct;
- (id)evaluateModels:(id)a0;
- (id)init:(id)a0 modelStore:(id)a1;

@end
