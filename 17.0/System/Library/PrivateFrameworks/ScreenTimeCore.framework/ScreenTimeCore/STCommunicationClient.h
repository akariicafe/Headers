@class NSXPCConnection;

@interface STCommunicationClient : NSObject

@property (readonly) NSXPCConnection *connection;

+ (id)_newConnection;

- (void)authenticateForCommunicationConfigurationOverrideWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)currentConfigurationWithError:(id *)a0;

@end
