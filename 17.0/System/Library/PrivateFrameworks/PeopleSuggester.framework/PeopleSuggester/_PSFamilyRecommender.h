@class CNContactStore, _CDInteractionStore, HKMedicalIDStore, _PSContactResolver, NSObject;
@protocol OS_dispatch_queue;

@interface _PSFamilyRecommender : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) _PSContactResolver *contactResolver;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) _CDInteractionStore *interactionStore;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) HKMedicalIDStore *medicalIDStore;

- (id)init;
- (id)contactKeysToFetch;
- (id)currentFamily;
- (void).cxx_destruct;
- (id)contactIdsFromEmergencyContacts;
- (id)contactIdsFromContactNamesUsingMe:(id)a0;
- (id)contactIdsFromContactRelationsUsingMe:(id)a0;
- (id)currentFamilyExcludingMe:(id)a0;
- (id)familyRecipientsForShareSheetWithPredictionContext:(id)a0;
- (id)familyRecommendationSuggestionsForShareSheetWithPredictionContext:(id)a0;
- (id)familyRecommendations;
- (id)fetchAllContactIdsFromContactStore:(id)a0;
- (id)handleAndBundleIdDictionaryForFamilyRecipientContact:(id)a0 lookBackDays:(long long)a1;
- (unsigned long long)indexToInsertDate:(id)a0 array:(id)a1;
- (void)logFeedbackForFamilyRecommenderCallHasRecommendations:(BOOL)a0;
- (id)nonFamilyRelations;
- (id)personRelationshipVocabularyByLocaleDictionary;
- (id)recipientFromFamilyContactId:(id)a0 familySuggestions:(id)a1 me:(id)a2 currentFamilyIds:(id)a3;
- (BOOL)regexMatchForRegex:(id)a0 string:(id)a1;
- (id)relationshipRegularExpressionForRelationship;
- (id)rerankFamilyRecipients:(id)a0 usingPredictionContext:(id)a1;
- (id)suggestionsForPhotosContactInferencesWithPredictionContext:(id)a0;
- (id)suggestionsForPhotosRelationshipsWithPredictionContext:(id)a0;
- (id)suggestionsFromRecipients:(id)a0;

@end
