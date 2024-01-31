@class SwiftVCDaemonXPCEventHandler, NSMutableDictionary, NSString, WFTriggerEventQueue, NSObject;
@protocol OS_dispatch_queue, WFDatabaseProvider, _CDUserContext;

@interface WFCoreDuetListener : NSObject <WFTriggerListener>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<_CDUserContext> userContext;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) SwiftVCDaemonXPCEventHandler *eventHandler;
@property (retain, nonatomic) WFTriggerEventQueue *eventQueue;
@property (readonly, nonatomic) NSMutableDictionary *registrations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)databaseWithError:(id *)a0;
- (void)checkTriggerStateWithKeyPath:(id)a0 completion:(id /* block */)a1;
- (void)fireTriggerWithIdentifier:(id)a0 force:(BOOL)a1 eventInfo:(id)a2 completion:(id /* block */)a3;
- (void)checkTriggerStateWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)handleCallbackForTriggerWithIdentifier:(id)a0 info:(id)a1;
- (void)handleSunriseSunsetChanged;
- (id)initWithDatabaseProvider:(id)a0 eventQueue:(id)a1;
- (BOOL)isCallbackRegisteredWithIdentifier:(id)a0;
- (void)queue_fireTriggerWithIdentifier:(id)a0 force:(BOOL)a1 eventInfo:(id)a2 completion:(id /* block */)a3;
- (void)queue_unregisterCallbackForIdentifier:(id)a0;
- (void)registerCallback:(id)a0 withIdentifier:(id)a1;
- (void)registerConfiguredTrigger:(id)a0 completion:(id /* block */)a1;
- (void)registerSunriseSunsetCallbackIfNeeded;
- (BOOL)registerTrigger:(id)a0 error:(id *)a1;
- (void)unregisterConfiguredTriggerWithIdentifier:(id)a0;

@end
