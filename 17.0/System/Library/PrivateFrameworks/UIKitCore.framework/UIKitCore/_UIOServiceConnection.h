@class UIOServer, NSString, NSHashTable, BSServiceConnection;
@protocol BSServiceConnectionHost;

@interface _UIOServiceConnection : NSObject <_UIOverlayServiceClientToServerInterface> {
    NSHashTable *_observers;
}

@property (readonly, weak, nonatomic) BSServiceConnection<BSServiceConnectionHost> *connection;
@property (readonly, weak, nonatomic) UIOServer *server;
@property (readonly, nonatomic) long long pid;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)connectionWithBSServiceConnection:(id)a0 toServer:(id)a1;

- (void)removeObserver:(id)a0;
- (void)removeAllObservers;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addObserver:(id)a0;
- (BOOL)clientHasEntitlement:(id)a0;
- (oneway void)performOverlayServerAction:(id)a0;
- (void)sendAction:(id)a0;
- (void)serviceConnectionDidInvalidate;

@end
