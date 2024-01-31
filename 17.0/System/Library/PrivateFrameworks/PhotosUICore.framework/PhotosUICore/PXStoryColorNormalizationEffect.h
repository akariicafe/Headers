@class PFStoryRecipeDisplayAssetNormalization, NSString, PXStoryColorNormalizationCubeLibrary;

@interface PXStoryColorNormalizationEffect : PXGColorGradingEffect {
    PXStoryColorNormalizationCubeLibrary *_library;
}

@property (nonatomic) long long currentRequestID;
@property (retain, nonatomic) PFStoryRecipeDisplayAssetNormalization *assetNormalization;
@property (readonly, nonatomic) NSString *effectSummary;
@property (readonly, nonatomic) NSString *effectDetails;

- (id)initWithEntityManager:(id)a0;
- (void).cxx_destruct;
- (void)_handleResult:(id)a0 resultType:(unsigned long long)a1 requestID:(long long)a2;
- (void)_updateColorLookupCube;

@end
