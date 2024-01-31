@interface PLPrimaryResourceDataStoreFileThumbnailRecipe : PLPrimaryResourceDataStoreImageRecipe

@property (nonatomic) unsigned int recipeID;

- (id)expectedFileURLForVersion:(unsigned int)a0 asset:(id)a1;
- (double)_shortSideTargetLength;
- (id)supportedVersionsForLocalResourceGeneration;
- (id)chooseIngredientsFrom:(id)a0 version:(unsigned int)a1;
- (void)generateAndStoreForAsset:(id)a0 version:(unsigned int)a1 imageConversionClient:(id)a2 videoConversionClient:(id)a3 conversionServiceOptions:(id)a4 deferredPhotoFinalizer:(id)a5 progress:(id *)a6 reason:(id)a7 completion:(id /* block */)a8;
- (id)description;
- (BOOL)_isAspectShortSizing;
- (struct CGSize { double x0; double x1; })sizeForAssetWidth:(long long)a0 height:(long long)a1;
- (double)_longSideTargetLength;
- (id)uti;
- (id)initWithRecipeID:(unsigned int)a0;
- (id)colorSpaceGivenSourceColorSpace:(id)a0 inContext:(id)a1;

@end
