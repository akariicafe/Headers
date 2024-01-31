@class NSString, NSXPCConnection;

@interface POUIServiceConnection : NSObject <POUIServiceProtocol>

@property (retain) NSXPCConnection *xpcConnection;
@property unsigned int uid;
@property BOOL forLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)xpcQueue;

- (id)init;
- (void)dealloc;
- (BOOL)_connectToService;
- (void).cxx_destruct;
- (void)deviceStatusWithCompletion:(id /* block */)a0;
- (void)startAction:(long long)a0 forUserName:(id)a1 completion:(id /* block */)a2;
- (void)startDeviceAction:(long long)a0 completion:(id /* block */)a1;
- (void)statusForUser:(id)a0 completion:(id /* block */)a1;

@end
