@interface KMIntentVocabularyStoreManager : NSObject

- (id)savedCustomVocabularyOverviewDictionary;
- (id)resolveIntentSlotsForApp:(id)a0 fromAllAppsOverview:(id)a1;
- (id)storedVocabularyForApp:(id)a0 intentSlot:(id)a1;

@end
