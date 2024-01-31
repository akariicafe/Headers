@class NSLock, NSXPCConnection;

@interface SKServiceBroker : NSObject {
    NSLock *_serviceConnectionLock;
    NSXPCConnection *_serviceConnection;
}

+ (id)_storeKitServiceInterface;
+ (id)defaultBroker;
+ (id)_serviceConnectionWithName:(id)a0;
+ (id)_storeKitClientInterface;

- (id)init;
- (id)policyServiceWithErrorHandler:(id /* block */)a0;
- (void)_serviceConnectionInvalidated;
- (id)storeKitServiceWithErrorHandler:(id /* block */)a0;
- (id)storeKitSynchronousServiceWithErrorHandler:(id /* block */)a0;
- (id)manageSubscriptionsServiceWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_serviceConnection;
- (id)productServiceWithErrorHandler:(id /* block */)a0;
- (id)inAppBindingServiceWithErrorHandler:(id /* block */)a0;

@end
