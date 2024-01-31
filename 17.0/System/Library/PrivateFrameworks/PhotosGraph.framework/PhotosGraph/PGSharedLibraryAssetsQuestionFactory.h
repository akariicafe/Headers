@interface PGSharedLibraryAssetsQuestionFactory : PGSurveyQuestionFactory

+ (id)_libraryScopeFromPhotoLibrary:(id)a0;
+ (BOOL)isSharedLibraryQuestionsEnabledForPhotoLibrary:(id)a0;

- (unsigned short)questionType;
- (long long)questionOptions;
- (id)_assetsFetchResultFromMoment:(id)a0;
- (id)_eligibleMomentsFetchResult;
- (id)collidingQuestionTypes;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;

@end
