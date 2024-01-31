@class NSObject;
@protocol OS_os_log, GTXPCConnection;

@interface GTTransportClient : NSObject {
    NSObject<OS_os_log> *_log;
    id<GTXPCConnection> _connection;
}

- (id)allServices;
- (id)capture;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)serviceProvider;
- (id)replayer;
- (id)loopback;
- (id)launcher;

@end
