@class NSString, NSObject;
@protocol OS_dispatch_data, OS_sec_identity, OS_nw_listener, OS_dispatch_queue;

@interface NetworkQualityHTTPServer : NSObject {
    unsigned int port;
    BOOL tlsEnabled;
    BOOL bonjourEnabled;
    BOOL launchdInvoked;
    int httpVersion;
    NSString *name;
    NSObject<OS_dispatch_data> *small_response_data;
    NSObject<OS_dispatch_data> *large_response_data;
    NSObject<OS_dispatch_data> *config_response_data;
    NSObject<OS_sec_identity> *sec_identity;
    NSObject<OS_nw_listener> *listener;
    NSObject<OS_dispatch_queue> *queue;
}

- (id)init;
- (id)initWithPort:(unsigned int)a0;
- (void)start:(id /* block */)a0;
- (void)stop;
- (void).cxx_destruct;
- (id)initWithLaunchd;
- (id)configForConnection:(id)a0;
- (id)configForConnection:(id)a0 mirrorIP:(BOOL)a1;
- (id)initWithPort:(unsigned int)a0 enableHTTP3:(BOOL)a1;
- (id)initWithPort:(unsigned int)a0 tlsEnabled:(BOOL)a1 httpVersion:(int)a2 bonjourEnabled:(BOOL)a3;
- (void)receiveLoop:(id)a0;
- (id)urlForType:(id)a0 withAddress:(id)a1 mirrorIP:(BOOL)a2;
- (id)urlFormatAddress:(id)a0;

@end
