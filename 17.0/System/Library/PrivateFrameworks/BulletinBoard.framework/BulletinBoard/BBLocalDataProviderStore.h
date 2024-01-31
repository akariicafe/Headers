@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, BBDataProviderStoreDelegate;

@interface BBLocalDataProviderStore : NSObject <BBLocalDataProviderFactoryStore, BBDataProviderStore> {
    id<BBDataProviderStoreDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSMutableDictionary *dataProvidersBySectionID;
@property (retain, nonatomic) NSMutableDictionary *dataProvidersByUniversalSectionID;
@property (retain, nonatomic) NSMutableArray *localFactories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localDataProviderStoreWithDelegate:(id)a0 dataProviderQueue:(id)a1;

- (id)debugDescriptionWithChildren:(unsigned long long)a0;
- (void)removeDataProvider:(id)a0;
- (void)addParentSectionInfo:(id)a0 displayName:(id)a1 icon:(id)a2;
- (void)addParentSectionInfo:(id)a0 displayName:(id)a1 icon:(id)a2 universalSectionID:(id)a3;
- (void)performBlockOnDataProviders:(id /* block */)a0;
- (void)loadAllDataProvidersAndPerformMigration:(BOOL)a0;
- (id)dataProvidersForUniversalSectionID:(id)a0;
- (void)removeDataProviderWithSectionID:(id)a0;
- (id)dataProviderForSectionID:(id)a0;
- (void).cxx_destruct;
- (void)_queue_removeDataProvider:(id)a0;
- (void)_addDataProviderClass:(Class)a0 performMigration:(BOOL)a1;
- (void)_addLocalDataProviderFactoryOfClass:(Class)a0;
- (void)_loadDataProviderPluginBundle:(id)a0 performMigration:(BOOL)a1;
- (void)_queue_addDataProvider:(id)a0 performMigration:(BOOL)a1;
- (void)addDataProvider:(id)a0 performMigration:(BOOL)a1;
- (id)initWithDelegate:(id)a0 dataProviderQueue:(id)a1;

@end
