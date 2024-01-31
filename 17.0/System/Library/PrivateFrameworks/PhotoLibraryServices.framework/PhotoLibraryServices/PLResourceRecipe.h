@interface PLResourceRecipe : NSObject <NSCopying>

+ (id)recipeFromID:(unsigned int)a0;
+ (Class)classFromRecipeID:(unsigned int)a0;

- (BOOL)isDerivative;
- (unsigned long long)hash;
- (id)expectedFileURLForVersion:(unsigned int)a0 asset:(id)a1;
- (id)supportedVersionsForLocalResourceGeneration;
- (id)codecFourCharCodeName;
- (id)chooseIngredientsFrom:(id)a0 version:(unsigned int)a1;
- (unsigned int)recipeID;
- (void)generateAndStoreForAsset:(id)a0 version:(unsigned int)a1 imageConversionClient:(id)a2 videoConversionClient:(id)a3 conversionServiceOptions:(id)a4 deferredPhotoFinalizer:(id)a5 progress:(id *)a6 reason:(id)a7 completion:(id /* block */)a8;
- (BOOL)isMarkedFullSize;
- (BOOL)isEqual:(id)a0;
- (id)uti;
- (unsigned int)orientation;
- (id)initWithRecipeID:(unsigned int)a0;
- (id)colorSpaceGivenSourceColorSpace:(id)a0 inContext:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)colorSpaceIsNativeForDisplay;
- (id)expectedSizeFromWidth:(long long)a0 height:(long long)a1;
- (id)maxPixelCountForAssetWidth:(long long)a0 height:(long long)a1;
- (void)populateAdjustedRecipeIngredients:(id)a0 asset:(id)a1 version:(unsigned int)a2;
- (unsigned short)recipeClassID;
- (id)recipeErrorWithCode:(long long)a0 version:(unsigned int)a1 underlyingError:(id)a2 debugDescription:(id)a3;

@end
