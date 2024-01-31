@class PHPhotoLibrary, PGManagerWorkingContext;

@interface PGExternalAssetProcessor : NSObject {
    PGManagerWorkingContext *_workingContext;
    PHPhotoLibrary *_photoLibrary;
}

- (void).cxx_destruct;
- (id)initWithWorkingContext:(id)a0;
- (BOOL)processExternalAssetRelevanceInferenceWithError:(id *)a0 progressReporter:(id)a1;
- (BOOL)processExternalAssetRelevanceInferenceWithError:(id *)a0 progressReporter:(id)a1 shareBackSuggester:(id)a2;

@end
