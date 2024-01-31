@class PHPhotoLibrary, NSPredicate, NSMutableSet;

@interface PXSurveyQuestionsDataSource : NSObject {
    unsigned long long _numberOfQuestionsGenerated;
    NSMutableSet *_answeredGadgetIdentifiers;
}

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, copy, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) unsigned long long numberOfQuestionsRemainingToBeAnswered;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0 predicate:(id)a1;
- (id)_fetchOptionsForShouldPrefetchCount:(BOOL)a0;
- (BOOL)didAnswerQuestionForGadgetIdentifier:(id)a0;
- (void)didGenerateNumberOfGadgets:(unsigned long long)a0;
- (void)didRemoveGadgetWithIdentifier:(id)a0;
- (id)fetchSortedAllUnansweredQuestionsWithLimit:(unsigned long long)a0;
- (unsigned long long)fetchTotalNumberOfAnsweredYesOrNoQuestions;
- (unsigned long long)fetchTotalNumberOfUnansweredQuestions;
- (void)invalidateQuestions:(id)a0;
- (id)mostRecentQuestionCreationDate;
- (void)resetGeneratedQuestions;

@end
