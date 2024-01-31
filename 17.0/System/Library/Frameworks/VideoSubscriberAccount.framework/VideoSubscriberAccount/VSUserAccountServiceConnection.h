@class NSXPCConnection;

@interface VSUserAccountServiceConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)serviceWithErrorHandler:(id /* block */)a0;

@end
