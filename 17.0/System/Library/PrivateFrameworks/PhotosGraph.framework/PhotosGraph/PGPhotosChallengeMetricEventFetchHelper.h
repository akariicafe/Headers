@class PGSuggestionSession, NSSet, NSDictionary, PHPhotoLibrary, PGManager;

@interface PGPhotosChallengeMetricEventFetchHelper : NSObject {
    PHPhotoLibrary *_photoLibrary;
    PGManager *_manager;
}

@property (retain, nonatomic) NSDictionary *questionsByQuestionTypeByEntityType;
@property (retain, nonatomic) PGSuggestionSession *featuredPhotosSuggestionSession;
@property (retain, nonatomic) NSDictionary *assetByAssetIdentifier;
@property (retain, nonatomic) NSDictionary *assetByAssetSyndicationIdentifier;
@property (retain, nonatomic) NSDictionary *momentUUIDByAssetIdentifier;
@property (retain, nonatomic) NSDictionary *activePersonUUIDByPersonUUID;
@property (retain, nonatomic) NSDictionary *memoryByMemoryIdentifier;
@property (retain, nonatomic) NSSet *tripKeyAssetIdentifiers;
@property (retain, nonatomic) NSSet *momentUUIDsForExhaustiveMomentLabelingQuestion;
@property (retain, nonatomic) NSSet *dayHighlightAssetIdentifiers;

- (id)initWithGraphManager:(id)a0;
- (void).cxx_destruct;
- (BOOL)suggestsToStartSharedLibraryWithError:(id *)a0;
- (void)_prefetchAssetByAssetIdentifier;
- (id)questionsForQuestionMetricType:(unsigned short)a0;
- (void)_buildQuestionsByQuestionTypeByEntityTypeFromQuestions:(id)a0;
- (BOOL)_migrationStepNeededForTripTitlingQuestions:(id)a0;
- (void)_prefetchActivePersonUUIDByPersonUUID;
- (void)_prefetchAssetByAssetSyndicationIdentifier;
- (void)_prefetchDayHighlightAssetIdentifiers;
- (void)_prefetchMemoryByMemoryIdentifier;
- (void)_prefetchMomentUUIDByAssetIdentifier;
- (void)_prefetchMomentUUIDsForExhaustiveMomentLabelingQuestion;
- (void)_prefetchQuestions;
- (void)_prefetchTripKeyAssetIdentifiers;
- (id)initForTestingWithQuestions:(id)a0 assetsByAssetId:(id)a1 momentUUIDByAssetIdentifier:(id)a2 activePersonUUIDByPersonUUID:(id)a3 tripKeyAssetIdentifiers:(id)a4 momentUUIDsForExhaustiveMomentLabeling:(id)a5 dayHighlightAssetIdentifiers:(id)a6;
- (id)questionsForQuestionType:(unsigned short)a0 questionEntityTypes:(id)a1;

@end
