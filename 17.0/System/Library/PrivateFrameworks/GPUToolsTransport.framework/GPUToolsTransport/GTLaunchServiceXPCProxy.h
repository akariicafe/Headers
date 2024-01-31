@class NSSet;
@protocol GTXPCConnection;

@interface GTLaunchServiceXPCProxy : NSObject <GTLaunchService> {
    id<GTXPCConnection> _connection;
    NSSet *_ignoreMethods;
}

- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)foregroundService:(unsigned long long)a0 error:(id *)a1;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (BOOL)launchReplayService:(id)a0 error:(id *)a1;
- (void)processStateForService:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)resumeService:(unsigned long long)a0 error:(id *)a1;
- (void)symbolicatorForService:(unsigned long long)a0 completionHandler:(id /* block */)a1;

@end
