@class ACHDatabaseAssertionClient, NSHashTable, NSArray, NSString, NSMutableDictionary, NSDictionary, HDProfile, ACHTemplateEntityWrapper, ACHAwardsClient, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface ACHTemplateStore : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, ACHTemplateEntitySyncedTemplatesObserver>

@property (retain, nonatomic) ACHAwardsClient *client;
@property (retain, nonatomic) ACHDatabaseAssertionClient *databaseAssertionClient;
@property (nonatomic) int protectedDataToken;
@property (nonatomic) int syncedTemplatesToken;
@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) ACHTemplateEntityWrapper *entityWrapper;
@property (nonatomic) unsigned char device;
@property (retain, nonatomic) NSMutableSet *templates;
@property (retain, nonatomic) NSMutableDictionary *templatesByUniqueName;
@property (retain, nonatomic) NSMutableDictionary *templatesByKey;
@property (retain, nonatomic) NSMutableDictionary *templatesBySource;
@property (retain, nonatomic) NSDictionary *templatesReadyToAdd;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue;
@property (nonatomic) BOOL initialFetchComplete;
@property (nonatomic) BOOL needsUpdateWhenProtectedDataAvailable;
@property (readonly, nonatomic) NSArray *allTemplates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (BOOL)_queue_addTemplates:(id)a0 provenance:(long long)a1 databaseContext:(id)a2 triggerSync:(BOOL)a3 error:(id *)a4;
- (void)daemonReady:(id)a0;
- (void)addTemplates:(id)a0;
- (void)dealloc;
- (id)initWithClient:(id)a0 assertionClient:(id)a1 device:(unsigned char)a2;
- (void)removeObserver:(id)a0;
- (void)_notifyObserversOfInitialFetchCompletion;
- (BOOL)removeTemplates:(id)a0 error:(id *)a1;
- (void)_notifyObserversOfNewTemplates:(id)a0;
- (BOOL)_queue_client_loadAllTemplatesFromDatabaseIfNecessary;
- (id)availableTemplatesForDateComponents:(id)a0 countryCode:(id)a1;
- (void)_removeTemplatesFromLocalCollections:(id)a0;
- (BOOL)loadAllTemplatesFromDatabaseIfNecessary;
- (id)templateForTemplateKey:(unsigned long long)a0;
- (id)_templatesWithUniqueNames:(id)a0;
- (void)templateEntityDidReceiveSyncedTemplates:(id)a0 provenance:(long long)a1;
- (BOOL)removeTemplatesForSource:(id)a0 error:(id *)a1;
- (BOOL)_client_loadAllTemplatesFromDatabaseIfNecessary;
- (BOOL)_daemon_loadAllTemplatesFromDatabaseIfNecessary;
- (void).cxx_destruct;
- (void)_notifyObserversOfRemovedTemplates:(id)a0;
- (void)_queue_protectedDataAvailabilityChanged:(BOOL)a0;
- (BOOL)_queue_client_addTemplatesToDatabase:(id)a0 error:(id *)a1;
- (id)templatesForSource:(id)a0;
- (BOOL)_queue_client_removeTemplatesFromDatabase:(id)a0 error:(id *)a1;
- (BOOL)addTemplates:(id)a0 databaseContext:(id)a1 error:(id *)a2;
- (id)templateForUniqueName:(id)a0;
- (BOOL)_queue_daemon_addTemplatesToDatabase:(id)a0 provenance:(long long)a1 databaseContext:(id)a2 error:(id *)a3;
- (BOOL)removeAllTemplates:(id *)a0;
- (void)addObserver:(id)a0;
- (BOOL)_queue_daemon_removeTemplatesFromDatabase:(id)a0 error:(id *)a1;
- (void)_queue_client_updateTemplatesFromDatabase;
- (BOOL)removeTemplatesWithUniqueNames:(id)a0 error:(id *)a1;
- (id)_queue_templatesFilteredForDuplicates:(id)a0;
- (id)initWithProfile:(id)a0 entityWrapper:(id)a1 device:(unsigned char)a2;
- (void)_addTemplatesToLocalCollections:(id)a0;
- (id)_queue_orphanedTemplatesWithFetchedTemplates:(id)a0;

@end
