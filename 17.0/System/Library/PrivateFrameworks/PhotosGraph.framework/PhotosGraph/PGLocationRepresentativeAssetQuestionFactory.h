@interface PGLocationRepresentativeAssetQuestionFactory : PGSurveyQuestionFactory

- (unsigned short)questionType;
- (long long)questionOptions;
- (id)_addQuestionsForAssetUUIDs:(id)a0 photoLibrary:(id)a1;
- (id)_fetchAssetsWithLibrary:(id)a0 internalPredicate:(id)a1;
- (id)_selectAssetsFromAssets:(id)a0 limit:(unsigned long long)a1;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;

@end
