@class NSString, PEResourceManager, PHAsset, NUComposition;

@interface PESmartPasteablePreset : PEPasteablePreset {
    PEResourceManager *_resourceManager;
    NSString *_expAndWBDebugDescription;
}

@property (retain, nonatomic) PHAsset *sourceAsset;
@property (nonatomic) unsigned long long sourceAssetSceneCharacteristics;
@property (nonatomic) BOOL shouldBypassGating;
@property (copy, nonatomic) NUComposition *sourceAssetComposition;

+ (BOOL)isAssetTypeEligibleForSmartPaste:(id)a0;

- (long long)actionType;
- (void).cxx_destruct;
- (id)expAndWBAdjustmentsDebugDescription;
- (id)initWithPasteablePreset:(id)a0;
- (void)applyToCompositionController:(id)a0 asset:(id)a1 editSource:(id)a2 completion:(id /* block */)a3;
- (void)applyToCompositionController:(id)a0 editSource:(id)a1 completion:(id /* block */)a2;
- (id)sceneCharacteristicDescription:(unsigned long long)a0;
- (unsigned long long)_imageClassificationsForAsset:(id)a0;
- (void)_loadResourcesForSourceAssetWithPhotoLibrary:(id)a0 completion:(id /* block */)a1;
- (BOOL)_shouldPerformSmartPasteOnAsset:(id)a0;
- (void)applyToLoadResult:(id)a0 completion:(id /* block */)a1;
- (BOOL)needsGeometryAdjustments;
- (void)triggerLegacyPasteFallbackOnCompositionController:(id)a0 editSource:(id)a1 asset:(id)a2 reviewPayload:(id)a3 completion:(id /* block */)a4;

@end
