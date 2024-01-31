@class NSArray, NSURL;

@interface AXMMobileAssetEvaluationNode : AXMEvaluationNode {
    unsigned long long _formatVersion;
}

@property (readonly, nonatomic) NSArray *mlModels;
@property (readonly, nonatomic) NSURL *mobileAssetBaseURL;

- (unsigned long long)formatVersion;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)maxSupportedFormatVersion;
- (unsigned long long)minSupportedFormatVersion;
- (void).cxx_destruct;
- (id)mobileAssetType;
- (void)_downloadAssetsIfNecessary;
- (id)contentVersionKey;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (id)mlModelClasses;
- (id)modelResourceNames;
- (id)modelURLs;
- (void)setModelURLs:(id)a0;

@end
