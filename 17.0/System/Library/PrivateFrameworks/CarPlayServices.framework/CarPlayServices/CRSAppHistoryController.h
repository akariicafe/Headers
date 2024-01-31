@class NSArray, NSString, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface CRSAppHistoryController : NSObject <CARAppHistoryServerToClientInterface, BSInvalidatable>

@property (class, readonly, nonatomic) NSArray *availableFeatureKeys;

@property (retain, nonatomic) BSServiceConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)fetchSessionFeatureKeysWithCompletion:(id /* block */)a0;
- (void)setSessionFeatureKeys:(id)a0 completion:(id /* block */)a1;
- (void)addAnalyticsValues:(id)a0 toEvent:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)fetchUIContextsWithCompletion:(id /* block */)a0;
- (void)fetchSessionEchoContextsWithCompletion:(id /* block */)a0;
- (void)fetchSessionUIContextsWithCompletion:(id /* block */)a0;

@end
