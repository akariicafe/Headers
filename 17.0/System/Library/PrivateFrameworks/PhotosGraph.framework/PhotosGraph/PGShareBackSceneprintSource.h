@class PHPhotoLibrary, NSCache;

@interface PGShareBackSceneprintSource : PGShareBackSource {
    PHPhotoLibrary *_photoLibrary;
    NSCache *_assetsInMomentCache;
}

- (void).cxx_destruct;
- (id)getAssetsInMomentNode:(id)a0 inGraph:(id)a1 error:(id *)a2;
- (id)initWithLoggingConnection:(id)a0 photoLibrary:(id)a1;
- (BOOL)isSimilarSuggesterInput:(id)a0 toMomentNode:(id)a1 inGraph:(id)a2 error:(id *)a3;
- (BOOL)prepareSourceWithGraph:(id)a0;
- (id)suggesterResultsForInputs:(id)a0 momentNodes:(id)a1 inGraph:(id)a2 error:(id *)a3;
- (id)validInputsForSource:(id)a0 givenSuggesterResults:(id)a1;

@end
