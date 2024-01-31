@interface PGWallpaperQuestionFactory : PGSurveyQuestionFactory

+ (BOOL)isHighRecallCityscapeAsset:(id)a0;
+ (BOOL)isHighRecallLandscapeAsset:(id)a0;

- (unsigned short)questionType;
- (long long)questionOptions;
- (id)_generateQuestionsWithLimit:(unsigned long long)a0 progressReporter:(id)a1;
- (id)_generateTruePositiveCityscapeQuestionWithLimit:(unsigned long long)a0 suggestionSession:(id)a1 alreadyGeneratedQuestions:(id)a2 progressReporter:(id)a3;
- (id)_generateTruePositiveLandscapeQuestionWithLimit:(unsigned long long)a0 suggestionSession:(id)a1 alreadyGeneratedQuestions:(id)a2 progressReporter:(id)a3;
- (id)_generateTruePositivePeopleQuestionWithLimit:(unsigned long long)a0 suggestionSession:(id)a1 alreadyGeneratedQuestions:(id)a2 progressReporter:(id)a3;
- (id)_generateTruePositivePetQuestionWithLimit:(unsigned long long)a0 suggestionSession:(id)a1 alreadyGeneratedQuestions:(id)a2 progressReporter:(id)a3;
- (id)_generateTruePositiveQuestionsWithLimit:(unsigned long long)a0 progressReporter:(id)a1;
- (id)evenlySelectQuestionsByType:(id)a0 limit:(unsigned long long)a1;
- (id)fetchAssetsWithPredicate:(id)a0 assetFilter:(id /* block */)a1;
- (id)fetchCityscapeAssets;
- (id)fetchLandscapeAssets;
- (id)fetchPeopleAssets;
- (id)fetchPetAssets;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;

@end
