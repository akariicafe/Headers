@class DMXPCConnection;

@interface DMMigrationPluginWrapperConnection : NSObject {
    DMXPCConnection *_connection;
    BOOL _didReceivePid;
}

@property (readonly, nonatomic) BOOL didReceivePid;

+ (id)connection;

- (id)init;
- (void)invalidate;
- (void)handleMessage:(id)a0;
- (void)resume;
- (void).cxx_destruct;
- (int)_pid;
- (int)pidForWatchdog;
- (void)runPluginAtPath:(id)a0 withIdentifier:(id)a1 parameters:(id)a2 completion:(id /* block */)a3;

@end
