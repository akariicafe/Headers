@interface PLPrimaryResourceDataStoreImageRecipe : PLResourceRecipe

@property (nonatomic) unsigned int recipeID;

+ (struct CGSize { double x0; double x1; })scaleOriginalSize:(struct CGSize { double x0; double x1; })a0 toLongSideTarget:(double)a1;
+ (struct CGSize { double x0; double x1; })scaleOriginalSize:(struct CGSize { double x0; double x1; })a0 toShortSideTarget:(double)a1 maxLongSideLength:(double)a2;

- (id)expectedFileURLForVersion:(unsigned int)a0 asset:(id)a1;
- (id)supportedVersionsForLocalResourceGeneration;
- (id)codecFourCharCodeName;
- (id)chooseIngredientsFrom:(id)a0 version:(unsigned int)a1;
- (void)generateAndStoreForAsset:(id)a0 version:(unsigned int)a1 imageConversionClient:(id)a2 videoConversionClient:(id)a3 conversionServiceOptions:(id)a4 deferredPhotoFinalizer:(id)a5 progress:(id *)a6 reason:(id)a7 completion:(id /* block */)a8;
- (id)description;
- (BOOL)isMarkedFullSize;
- (id)uti;
- (id)initWithRecipeID:(unsigned int)a0;
- (id)colorSpaceGivenSourceColorSpace:(id)a0 inContext:(id)a1;
- (void)_generateAndStoreUsingMediaConversionServicesForAsset:(id)a0 version:(unsigned int)a1 conversionClient:(id)a2 videoConversionClient:(id)a3 conversionServiceOptions:(id)a4 isHighPriority:(BOOL)a5 progress:(id *)a6 reason:(id)a7 completion:(id /* block */)a8;
- (id)_mediaConversionServiceOptionsForAsset:(id)a0 url:(id)a1 conversionServiceOptions:(id)a2 adjustmentData:(id)a3 largeAdjustmentData:(id)a4 isHighPriority:(BOOL)a5 reason:(id)a6;
- (id)_resourceGenerationAffectsRecipesForLibraryID:(id)a0;
- (BOOL)_storeResourceWithType:(unsigned int)a0 version:(unsigned int)a1 asset:(id)a2 destURL:(id)a3 error:(id *)a4;
- (BOOL)colorSpaceIsNativeForDisplay;
- (id)expectedSizeFromWidth:(long long)a0 height:(long long)a1;
- (void)generateAndStoreForAssetWithPriority:(id)a0 version:(unsigned int)a1 imageConversionClient:(id)a2 videoConversionClient:(id)a3 isHighPriority:(BOOL)a4 reason:(id)a5 progress:(id *)a6 completion:(id /* block */)a7;
- (id)maxPixelCountForAssetWidth:(long long)a0 height:(long long)a1;

@end
