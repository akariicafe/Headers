@protocol PEAdjustmentPresetAutoDelegate;

@interface PEPasteablePreset : PEAdjustmentPreset

@property (weak, nonatomic) id<PEAdjustmentPresetAutoDelegate> autoDelegate;

+ (BOOL)hasValidAdjustmentsInCompositionController:(id)a0;
+ (void)_filterValidAdjustmentsInCompositionController:(id)a0;
+ (void)sanitizeCompositionController:(id)a0;

- (long long)actionType;
- (void).cxx_destruct;
- (id)sourceAssetUUID;
- (id)expAndWBAdjustmentsDebugDescription;
- (BOOL)isEligibleForAsyncProcessingOnAsset:(id)a0;
- (BOOL)isEligibleForSmartPasteWithPhotoLibrary:(id)a0;
- (void)_runAutoCalculatorForCompositionController:(id)a0;
- (void)applyToCompositionController:(id)a0 invalidAdjustmentKeys:(id)a1 completion:(id /* block */)a2;
- (BOOL)isEligibleForSmartPasteWithPhotoLibrary:(id)a0 fallbackPayload:(id *)a1;
- (BOOL)needsGeometryAdjustments;

@end
