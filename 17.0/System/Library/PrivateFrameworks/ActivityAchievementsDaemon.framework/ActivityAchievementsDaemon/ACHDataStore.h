@class ACHDatabaseAssertionClient, NSHashTable, NSError, NSString, HKHealthStore, HDProfile, ACHAwardsKeyValueClient, NSObject, HDKeyValueDomain;
@protocol OS_dispatch_queue;

@interface ACHDataStore : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver>

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) ACHAwardsKeyValueClient *keyValueClient;
@property (retain, nonatomic) ACHDatabaseAssertionClient *assertionClient;
@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDKeyValueDomain *defaultsDomain;
@property (nonatomic) BOOL needsPopulationWhenProtectedDataAvailable;
@property (nonatomic) BOOL hasCompletedFirstPopulateFromDatabase;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSError *injectedError;
@property (copy, nonatomic) id /* block */ populationCompleteBlock;
@property (retain, nonatomic) NSHashTable *propertyProviders;
@property (nonatomic) int protectedDataToken;
@property (nonatomic) int syncToken;
@property (copy, nonatomic) NSString *databaseIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)daemonReady:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)initWithProfile:(id)a0;
- (void)_injectError:(id)a0;
- (void)commitAllPropertiesToDatabaseWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_protectedDataStateDidChange;
- (void)activate;
- (BOOL)commitAllPropertiesWithError:(id *)a0;
- (BOOL)_forceDatabasePopulate;
- (BOOL)_queue_setDatabaseIdentifier:(id)a0 error:(id *)a1;
- (void)_listenForNotifications;
- (BOOL)clearAllPropertiesWithError:(id *)a0 databaseContext:(id)a1;
- (void).cxx_destruct;
- (BOOL)_queue_daemon_populateFromDatabaseForProviders:(id)a0 error:(id *)a1;
- (id)initWithHealthStore:(id)a0 assertionClient:(id)a1;
- (BOOL)_queue_populateAllPropertiesFromDatabase;
- (BOOL)commitPropertiesForProvider:(id)a0 withError:(id *)a1;
- (void)addPropertyProvider:(id)a0;
- (BOOL)clearAllInMemoryPropertiesWithError:(id *)a0;
- (void)_startUp;
- (void)addObserver:(id)a0;
- (BOOL)_queue_populateFromDatabaseForProviders:(id)a0 error:(id *)a1;
- (id)_queue_dictionaryRepresentationOfAllProviderProperties;
- (BOOL)_queue_healthStore_populateFromDatabaseForProviders:(id)a0 error:(id *)a1;
- (void)_syncEntityDidReceiveValues:(id)a0;
- (id)_queue_allPropertyProviderKeys;

@end
