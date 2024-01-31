@class NSSet, VNSceneprint, NSString;
@protocol MLFeatureProvider;

@interface VNSceneprintMLFeatureProvider : NSObject <MLFeatureProvider> {
    VNSceneprint *_sceneprint;
    NSString *_sceneprintKey;
    long long _sceneprintDataType;
    id<MLFeatureProvider> _originalFeatureProvider;
}

@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithSceneprint:(id)a0 dataType:(long long)a1 forKey:(id)a2 originalFeatureProvider:(id)a3;

@end
