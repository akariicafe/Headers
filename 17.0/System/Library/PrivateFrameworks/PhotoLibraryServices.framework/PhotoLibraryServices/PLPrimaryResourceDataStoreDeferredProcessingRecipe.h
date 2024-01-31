@interface PLPrimaryResourceDataStoreDeferredProcessingRecipe : PLResourceRecipe

@property (nonatomic) unsigned int recipeID;

- (BOOL)_needsVideoFinalizationForImageAsset:(id)a0;
- (id)supportedVersionsForLocalResourceGeneration;
- (void)generateAndStoreForAsset:(id)a0 version:(unsigned int)a1 imageConversionClient:(id)a2 videoConversionClient:(id)a3 conversionServiceOptions:(id)a4 deferredPhotoFinalizer:(id)a5 progress:(id *)a6 reason:(id)a7 completion:(id /* block */)a8;
- (id)description;
- (BOOL)isMarkedFullSize;
- (id)initWithRecipeID:(unsigned int)a0;
- (id)colorSpaceGivenSourceColorSpace:(id)a0 inContext:(id)a1;

@end
