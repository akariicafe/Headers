@class NSString, NSMutableDictionary, BBLocalDataProviderStore, BBRemoteDataProviderConnectionResolver, NSObject;
@protocol OS_dispatch_queue, BBDataProviderManagerDelegate;

@interface BBDataProviderManager : NSObject <BBDataProviderStoreDelegate> {
    id<BBDataProviderManagerDelegate> _delegate;
    BBLocalDataProviderStore *_localDataProviderStore;
    BBRemoteDataProviderConnectionResolver *_remoteDataProviderResolver;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _loadQueueSuspended;
    NSObject<OS_dispatch_queue> *_loadDataProviderQueue;
    NSMutableDictionary *_parentFactoriesBySectionID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)debugDescriptionWithChildren:(unsigned long long)a0;
- (void)dealloc;
- (id)_queue_dataProvidersForUniversalSectionID:(id)a0;
- (void)reloadIdentityForSectionID:(id)a0 withCompletion:(id /* block */)a1;
- (id)localSectionIdentifiersFromDismissalSectionIdentifer:(id)a0;
- (void)noteSettingsChanged:(id)a0 forSectionID:(id)a1;
- (void)performBlockOnDataProviders:(id /* block */)a0;
- (void)loadAllDataProvidersAndPerformMigration:(BOOL)a0;
- (id)universalSectionIDForSectionID:(id)a0;
- (id)parentSectionDataProviderFactoryForSectionID:(id)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (id)_configureSectionInfo:(id)a0 forDataProvider:(id)a1;
- (void)dataProviderStore:(id)a0 didRemoveDataProvider:(id)a1;
- (id)_queue_getSectionInfoForSectionID:(id)a0;
- (id)dataProviderForSectionID:(id)a0;
- (void).cxx_destruct;
- (id)rebuildSectionInfo:(id)a0 forSectionID:(id)a1;
- (void)dataProviderStore:(id)a0 didAddDataProvider:(id)a1 performMigration:(BOOL)a2 completion:(id /* block */)a3;
- (id)_configureDataProvider:(id)a0 performMigration:(BOOL)a1;
- (void)dataProviderStore:(id)a0 didAddParentSectionFactory:(id)a1;

@end
