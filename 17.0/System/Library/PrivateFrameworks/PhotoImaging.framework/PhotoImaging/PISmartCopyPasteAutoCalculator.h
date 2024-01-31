@class NUComposition, NSData, PISliderNetLiftRequest, PISliderNetAdjustmentsRequest, IHKSliderNetCPModel;

@interface PISmartCopyPasteAutoCalculator : NUAutoCalculator {
    IHKSliderNetCPModel *_sliderNetModel;
    NUComposition *_targetComposition;
}

@property (retain, nonatomic) PISliderNetLiftRequest *liftRequest;
@property (retain, nonatomic) PISliderNetAdjustmentsRequest *adjustmentsRequest;
@property (nonatomic) double similarityGatingThreshold;
@property (copy, nonatomic) NSData *sourceAssetScenePrint;
@property (copy, nonatomic) NSData *targetAssetScenePrint;

+ (double)_clampedValueForValue:(double)a0 adjustmentKey:(id)a1 settingKey:(id)a2 fallbackMinValue:(double)a3 fallbackMaxValue:(double)a4;
+ (id)adjustmentsToModifyBasedOnSourceCompositionController:(id)a0;
+ (void)applyAdjustmentDictionary:(id)a0 toCompositionController:(id)a1;
+ (id)descriptionForAdjustmentDictionary:(id)a0;
+ (id)imageHarmonizationKitVersion;

- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;
- (void).cxx_destruct;
- (id)adjustedCompositionForNetwork:(id)a0 withSourceComposition:(id)a1;
- (id)adjustmentsDictionaryWithNetworkOutput:(id)a0 similarity:(float)a1;
- (id)initWithSourceComposition:(id)a0 targetComposition:(id)a1;

@end
