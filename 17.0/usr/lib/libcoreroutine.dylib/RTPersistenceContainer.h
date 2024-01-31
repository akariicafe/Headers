@class NSString, NSPersistentStoreCoordinator, NSArray, NSObject;
@protocol OS_dispatch_queue, RTPersistenceContainerDelegate;

@interface RTPersistenceContainer : NSObject {
    NSArray *_configurations;
}

@property (retain) NSObject<OS_dispatch_queue> *contextRequestsQueue;
@property BOOL serveContexts;
@property BOOL setupFailed;
@property (retain) NSPersistentStoreCoordinator *coordinator;
@property (weak, nonatomic) id<RTPersistenceContainerDelegate> delegate;
@property (readonly) NSString *name;
@property (readonly) BOOL storesNeedSetup;

- (id)init;
- (void)dealloc;
- (id)persistenceContextWithOptions:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)waitForPersistenceContext;
- (id)persistenceContext;
- (id)_persistenceContext;
- (BOOL)_validateConfigurations:(id)a0;
- (id)initWithName:(id)a0 model:(id)a1 configurations:(id)a2;
- (void)persistenceContextWithHandler:(id /* block */)a0;
- (void)resumePersistenceStores;
- (void)setupPersistenceStores;
- (void)suspendPersistenceStores;
- (id)tearDownPersistenceStack;
- (BOOL)updateContainerConfigurations:(id)a0;

@end
