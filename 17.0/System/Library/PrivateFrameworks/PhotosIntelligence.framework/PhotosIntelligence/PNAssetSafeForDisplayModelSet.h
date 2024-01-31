@class CLSNSFWModel, CLSIVSNSFWModel, CLSTabooEventModel;

@interface PNAssetSafeForDisplayModelSet : NSObject

@property (readonly, nonatomic) short sceneAnalysisVersion;
@property (readonly, nonatomic) CLSIVSNSFWModel *ivsNSFWModel;
@property (readonly, nonatomic) CLSNSFWModel *nsfwModel;
@property (readonly, nonatomic) CLSTabooEventModel *tabooEventModel;

- (void).cxx_destruct;
- (id)initWithSceneAnalysisVersion:(short)a0;

@end
