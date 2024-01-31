@interface PLResourceGenerator : NSObject

+ (id)expectedLocalResourceRecipesForAsset:(id)a0 versions:(id)a1;
+ (id)expectedLocalResourceRecipesForAssetWithLibraryID:(id)a0 versions:(id)a1 assetHasAdjustments:(BOOL)a2 isDefaultAdjustedSlomo:(BOOL)a3 assetIsRAWOrRawPlugJPEGWithRawOnTop:(BOOL)a4 assetWidth:(long long)a5 assetHeight:(long long)a6 assetKind:(short)a7 assetkindSubtype:(short)a8 deferredProcessingNeeded:(unsigned short)a9 videoDeferredProcessingNeeded:(unsigned short)a10;
+ (id)locallyUnavailableRecipesFromRecipes:(id)a0 versions:(id)a1 asset:(id)a2;
+ (id)generateAndStoreMissingExpectedLocalResourcesForAsset:(id)a0 versions:(id)a1 imageConversionClient:(id)a2 videoConversionClient:(id)a3 conversionServiceOptions:(id)a4 reason:(id)a5 completion:(id /* block */)a6;
+ (id)fileAndTableBackedThumbnailManagerRecipesForLibraryID:(id)a0;
+ (void)_continueGeneratingResourcesForAsset:(id)a0 versions:(id)a1 imageConversionClient:(id)a2 videoConversionClient:(id)a3 conversionServiceOptions:(id)a4 remainingRecipes:(id)a5 storedRecipes:(id)a6 attemptedRecipes:(id)a7 errorsEncountered:(id)a8 progress:(id)a9 reason:(id)a10 completion:(id /* block */)a11;

@end
