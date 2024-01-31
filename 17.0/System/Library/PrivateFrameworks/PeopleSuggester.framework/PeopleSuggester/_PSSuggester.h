@class CNContactStore, NSXPCConnection, BMSource, NSDictionary, NSObject, _PSSuggesterConfiguration;
@protocol OS_dispatch_queue;

@interface _PSSuggester : NSObject {
    NSXPCConnection *_connection;
    NSXPCConnection *_userConnection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_feedbackQueue;
    BMSource *_feedbackSource;
    CNContactStore *_contactStore;
    NSDictionary *_appBundleIdToShareExtensionMapping;
    NSObject<OS_dispatch_queue> *_peopleSuggestionQueue;
    NSObject<OS_dispatch_queue> *_appExtensionQueue;
}

@property (class) BOOL hasInitializedCache;

@property (readonly, nonatomic) _PSSuggesterConfiguration *configuration;

+ (void)initializePSSuggesterCacheWithMaxSuggestionCount:(id)a0;
+ (id)suggesterWithDaemon;

- (id)init;
- (id)rankedFamilySuggestions;
- (void)dealloc;
- (id)autocompleteSearchResultsWithPredictionContext:(id)a0;
- (id)validateCoreMLScoringModelWithRawInput:(id)a0 predictionContext:(id)a1;
- (id)candidatesForShareSheetRanking;
- (id)buildFilteringPredicateMatchingSuggestLessFeedback:(id)a0;
- (void)asyncShareExtensionSuggestionsFromContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)interactionCountForHandle:(id)a0 fetchLimit:(unsigned long long)a1 interactionStoreDB:(id)a2;
- (void)provideFeedbackForMessagesZkwSuggestions:(id)a0;
- (id)shareExtensionSuggestionsFromContext:(id)a0;
- (id)shareSheetInteractionsFromContext:(id)a0;
- (id)computeShareSheetEphemeralFeaturesWithPredictionContext:(id)a0;
- (id)initWithConfiguration:(id)a0 feedbackRecording:(BOOL)a1;
- (void)asyncSuggestInteractionsFromContext:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void)provideFeedbackForSuggestions:(id)a0;
- (void)donateToBiome:(id)a0;
- (id)suggestInteractionsFromContext:(id)a0;
- (id)rankedNameSuggestionsFromContext:(id)a0 name:(id)a1;
- (id)shareSheetInteractionsFromContext:(id)a0 maximumNumberOfSuggestions:(long long)a1;
- (id)familyRecommendationSuggestionsWithPredictionContext:(id)a0;
- (id)getCacheSuggestionsWithPredictionContext:(id)a0;
- (id)rankedAutocompleteSuggestionsFromContext:(id)a0 candidates:(id)a1;
- (id)_getUserDaemonXPCConnection;
- (id)initWithConfiguration:(id)a0;
- (id)photosContactInferencesSuggestionsWithPredictionContext:(id)a0;
- (void).cxx_destruct;
- (void)asyncSuggestInteractionsFromContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)rankedZKWSuggestionsFromContext:(id)a0;
- (void)_recordFeedbackToInteractionStoreWithFeedback:(id)a0 mechanism:(long long)a1;
- (id)rankedGlobalSuggestionsFromContext:(id)a0 contactsOnly:(BOOL)a1;
- (void)provideSuggestLessFeedbackForShareSheetSuggestion:(id)a0;
- (BOOL)interactionAvailableForHandle:(id)a0 interactionStoreDB:(id)a1;
- (void)writeFeedbackForContactsAutocompleteSuggestions:(id)a0;
- (id)appExtensionSuggestionsFromContext:(id)a0;
- (BOOL)interactionAvailableForHandle:(id)a0;
- (id)photosRelationshipSuggestionsWithPredictionContext:(id)a0;
- (void)deleteInteractionsMatchingSuggestLessFeedback:(id)a0;
- (void)asyncShareExtensionSuggestionsFromContext:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (id)hourOfDayProbabilitiesToInteractWithContacts:(id)a0;
- (id)contactStore;
- (id)initWithDaemonUsingConfiguration:(id)a0;
- (BOOL)isTransportBundleIDSupported:(id)a0;
- (id)_dateFormatter;
- (id)rankedSiriNLContactSuggestionsFromContext:(id)a0 maxSuggestions:(id)a1 interactionId:(id)a2;
- (id)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)a0 daysAgo:(long long)a1;
- (id)candidatesForShareSheetRankingCompute;
- (id)hourOfDayProbabilitiesToInteractWithContact:(id)a0;
- (id)interactionCountForHandle:(id)a0 fetchLimit:(unsigned long long)a1;
- (void)provideFeedbackForContactsAutocompleteSuggestions:(id)a0;

@end
