@class MPCAssetLoadPropertiesLocalFileEvaluation, MPCModelGenericAVItemAssetLoadProperties;

@interface MPCModelGenericAVItemLocalFileLoadOperation : MPAsyncOperation

@property (readonly, nonatomic) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties;
@property (readonly, nonatomic) MPCAssetLoadPropertiesLocalFileEvaluation *fileAssetEvaluation;
@property (nonatomic) BOOL requirePreferredAssetQuality;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)execute;
- (void).cxx_destruct;
- (id)initWithEvaluation:(id)a0 properties:(id)a1;

@end
