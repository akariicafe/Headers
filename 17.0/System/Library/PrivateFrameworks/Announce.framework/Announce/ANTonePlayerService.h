@class NSXPCConnection;

@interface ANTonePlayerService : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)playTone:(unsigned long long)a0 audioSessionID:(unsigned int)a1 endpointUUID:(id)a2 completionHandler:(id /* block */)a3;

@end
