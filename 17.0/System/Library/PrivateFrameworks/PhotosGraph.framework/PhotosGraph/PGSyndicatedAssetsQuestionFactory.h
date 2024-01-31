@interface PGSyndicatedAssetsQuestionFactory : PGSurveyQuestionFactory

- (unsigned short)questionType;
- (long long)questionOptions;
- (id)_allAssetsFetchResultWithOptions:(id)a0;
- (BOOL)_isHubbleFeatureFlagEnabled;
- (id)_syndicatedPhotoLibraryWithError:(id *)a0;
- (id)_validRandomAssetsFromFetchResult:(id)a0 limit:(unsigned long long)a1;
- (id)_validRandomAssetsWithLimit:(unsigned long long)a0 photoLibrary:(id)a1;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;

@end
