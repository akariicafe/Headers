@class NSHashTable, NSString, NSArray, NPSManager, NSTimer, NSMutableDictionary, TCSContacts, CNContactStore, NSObject, CNCoalescingTimer, NSUserDefaults, IDSBatchIDQueryController;
@protocol OS_dispatch_queue;

@interface TCSSuggestions : NSObject <IDSBatchIDQueryControllerDelegate, TCSContactsObserver> {
    int _firstUnlockToken;
    int _npsInitialSyncToken;
    NSObject<OS_dispatch_queue> *_generationQueue;
    NSObject<OS_dispatch_queue> *_coreRecentsQueue;
    NSHashTable *_observers;
    NPSManager *_npsManager;
    CNCoalescingTimer *_suggestionsSaveTimer;
    NSTimer *_suggestionGenerationTimer;
    IDSBatchIDQueryController *_queryController;
    NSMutableDictionary *_suggestedDestinationToStatus;
}

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) TCSContacts *contacts;
@property (retain, nonatomic) NSUserDefaults *defaults;
@property (nonatomic) BOOL shouldObserveSuggestionsDefaultChanges;
@property (retain, nonatomic) NSMutableDictionary *suggestions;
@property (retain, nonatomic) NSArray *suggestedDestinations;
@property (nonatomic) BOOL generationTimerEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_descriptorForRequiredKeys;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)_invalidate;
- (void)_deviceDidPair:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)batchQueryController:(id)a0 updatedDestinationsStatus:(id)a1 onService:(id)a2 error:(id)a3;
- (void)_addSuggestedDestination:(id)a0 withTimestamp:(id)a1;
- (void)_deleteSuggestions;
- (id)_destinationsFromCallHistory;
- (id)_destinationsFromCoreRecents;
- (id)_destinationsFromFavorites;
- (void)_generateNewSuggestions;
- (void)_handleDeviceFirstUnlock;
- (void)_notifyObserversSuggestionsChanged;
- (id)_performHousekeepingOnSuggestions:(id)a0;
- (void)_performIDQueryForSuggestions:(id)a0;
- (void)_saveSuggestions;
- (BOOL)_shouldGenerateNewSuggestions;
- (void)_startGenerationTimerWithFireDate:(id)a0;
- (void)_stopGenerationTimer;
- (void)_syncSuggestions;
- (void)_updateGenerationTimestamps;
- (void)destinationsDidChange:(id)a0;
- (void)generateNewSuggestionsIfNecessary;
- (id)initWithContactStore:(id)a0 contacts:(id)a1;

@end
