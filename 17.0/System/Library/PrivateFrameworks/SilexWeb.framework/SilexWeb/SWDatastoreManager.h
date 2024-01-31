@class SWDatastore, NSString, NSHashTable;
@protocol SWDocumentStateProviding, SWLogger, SWDatastoreSynchronizationManager;

@interface SWDatastoreManager : NSObject <SWDatastoreManager>

@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) id<SWLogger> logger;
@property (readonly, nonatomic) id<SWDocumentStateProviding> documentStateProvider;
@property (readonly, nonatomic) id<SWDatastoreSynchronizationManager> datastoreSynchronizationManager;
@property (retain, nonatomic) SWDatastore *privateDatastore;
@property (readonly, nonatomic) SWDatastore *datastore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)initWithLogger:(id)a0 documentStateProvider:(id)a1 datastoreSynchronizationManager:(id)a2;
- (void)updateDatastore:(id)a0 originatingSession:(id)a1 completion:(id /* block */)a2;
- (void)updateDatastore:(id)a0 originatingSession:(id)a1 forceUpdate:(BOOL)a2 completion:(id /* block */)a3;

@end
