@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, SetupEngineDelegate;

@interface HDSSetupClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id<SetupEngineDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (id)init;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)startAdvertisingWithCompletion:(id /* block */)a0;

@end
