@class NSXPCConnection;

@interface STSetupClient : NSObject

@property (readonly) NSXPCConnection *connection;

+ (id)_newConnection;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)applyUpdatedConfiguration:(id)a0 error:(id *)a1;
- (void)collectPasscodeFromUserWithCompletionHandler:(id /* block */)a0;
- (id)currentConfigurationForUser:(id)a0 error:(id *)a1;

@end
