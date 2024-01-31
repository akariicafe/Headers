@class PGSuggestionSession, NSIndexSet, NSString, CLSSceneConfidenceThresholdHelper, NSSet;

@interface PGAbstractSuggester : NSObject <PGSuggester> {
    CLSSceneConfidenceThresholdHelper *_suggestableScenesHelper;
    BOOL _prefetchedSharedLibraryState;
    BOOL _isSharedLibraryEnabled;
    NSSet *_sharedLibraryPersonIdentifiers;
}

@property (class, readonly) NSIndexSet *suggestionTypes;
@property (class, readonly) NSIndexSet *suggestionSubtypes;

@property (weak, nonatomic) PGSuggestionSession *session;
@property (nonatomic) BOOL lastSuggestionWasColliding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedLibraryPersonIdentifiersInLibrary:(id)a0 withScope:(id)a1;
+ (id)internalPredicateForProcessedAssetsWithMinimumSceneAnalysisVersion:(unsigned long long)a0;
+ (BOOL)lastSuggestionWasColliding;
+ (id)noVideoPredicate;
+ (void)setLastSuggestionWasColliding:(BOOL)a0;
+ (id)suggestedPersonLocalIdentifiersFromSharingSuggestionResults:(id)a0 forMomentNodes:(id)a1 containsUnverifiedPersons:(BOOL *)a2;
+ (id)suggesterWithSession:(id)a0;

- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (void)_prefetchSharedLibraryStateIfNeeded;
- (BOOL)assetIsValidForSuggesting:(id)a0;
- (BOOL)canGenerateSuggestionWithAsset:(id)a0 onDate:(id)a1;
- (id)defaultAssetFetchOptionsWithInternalPredicate:(id)a0;
- (BOOL)hasSuggestableScenesWithAsset:(id)a0;
- (BOOL)processedAssetIsValidForSuggesting:(id)a0 allowGuestAsset:(BOOL)a1;
- (id)reasonsForSuggestion:(id)a0;
- (id)sharingSuggestionResultsForMomentNodes:(id)a0 withWorkingContext:(id)a1;
- (id)suggestionsWithOptions:(id)a0 progress:(id /* block */)a1;
- (double)userFeedbackScoreWithAsset:(id)a0;

@end
