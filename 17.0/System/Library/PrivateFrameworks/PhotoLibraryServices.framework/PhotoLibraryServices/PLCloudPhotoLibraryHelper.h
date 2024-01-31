@interface PLCloudPhotoLibraryHelper : NSObject

+ (BOOL)shouldClearPurgeableResourcesOnce;
+ (void)setShouldHandleOptimizeModeChange:(BOOL)a0;
+ (BOOL)shouldMarkPurgeableResourcesOnce;
+ (BOOL)shouldRepushAssetsWithImportedByBundleIdentifier;
+ (void)_donateTipsAppEnablementSignal;
+ (void)setShouldRepushAssetsWithImportedByBundleIdentifier:(BOOL)a0;
+ (void)setShouldClearPurgeableResourcesOnce:(BOOL)a0;
+ (BOOL)shouldSendOptimizeFeedbackOnce;
+ (void)disableCPL:(id /* block */)a0;
+ (void)setShouldRepushMasterWithMissingMediaMetadataOnce:(BOOL)a0;
+ (void)setShouldSendOptimizeFeedbackOnce:(BOOL)a0;
+ (BOOL)shouldRepushVideoAssetsMetadataOnce;
+ (void)setShouldMarkPurgeableResourcesOnce:(BOOL)a0;
+ (void)setShouldRepushVideoAssetsMetadataOnce:(BOOL)a0;
+ (BOOL)shouldHandleOptimizeModeChange;
+ (BOOL)shouldRepushMasterWithMissingMediaMetadataOnce;
+ (void)enableCPL:(id /* block */)a0;

@end
