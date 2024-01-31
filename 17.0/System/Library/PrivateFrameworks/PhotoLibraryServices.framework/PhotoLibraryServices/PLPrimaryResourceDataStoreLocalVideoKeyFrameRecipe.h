@class PLLocalVideoKeyFrameJobQueue;

@interface PLPrimaryResourceDataStoreLocalVideoKeyFrameRecipe : PLResourceRecipe {
    PLLocalVideoKeyFrameJobQueue *_jobQueue;
}

+ (void)generateKeyFrameFromVideoURL:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 completion:(id /* block */)a2;
+ (void)generateKeyFrameFromVideoURL:(id)a0 destinationURL:(id)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 completion:(id /* block */)a3;

- (void)_runNextJob;
- (id)codecFourCharCodeName;
- (id)chooseIngredientsFrom:(id)a0 version:(unsigned int)a1;
- (unsigned int)recipeID;
- (void)generateAndStoreForAsset:(id)a0 version:(unsigned int)a1 imageConversionClient:(id)a2 videoConversionClient:(id)a3 conversionServiceOptions:(id)a4 deferredPhotoFinalizer:(id)a5 progress:(id *)a6 reason:(id)a7 completion:(id /* block */)a8;
- (void).cxx_destruct;
- (id)initWithRecipeID:(unsigned int)a0;
- (id)colorSpaceGivenSourceColorSpace:(id)a0 inContext:(id)a1;
- (void)_generateAndStoreForAsset:(id)a0 networkAccessAllowed:(BOOL)a1 progress:(id *)a2 completion:(id /* block */)a3;
- (void)_handleJobFinished:(id)a0 withMutatedMoc:(id)a1 error:(id)a2 storedRecipes:(id)a3 affectedRecipes:(id)a4 sourceMetadata:(id)a5;
- (void)_handleKeyFrameGeneratedWithAsset:(id)a0 destinationURL:(id)a1 completion:(id /* block */)a2;
- (void)generateAndStoreForAsset:(id)a0 networkAccessAllowed:(BOOL)a1 progress:(id *)a2 completion:(id /* block */)a3;

@end
