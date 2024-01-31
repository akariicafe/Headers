@class NSString, NWParameters, NWEndpoint, NSObject, NSError;
@protocol NWTCPListenerDelegate, OS_nw_listener;

@interface NWTCPListener : NSObject

@property (retain) NSObject<OS_nw_listener> *internalListener;
@property (retain) NWParameters *parameters;
@property (retain) NWEndpoint *endpoint;
@property (retain) NSString *launchdKey;
@property (weak) id<NWTCPListenerDelegate> delegate;
@property (retain) NSError *error;
@property (retain) NWEndpoint *localEndpoint;

- (id)initWithParameters:(id)a0 delegate:(id)a1;
- (void)handleError:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)handleNewConnection:(id)a0;
- (id)initWithBonjourServiceEndpoint:(id)a0 parameters:(id)a1 delegate:(id)a2;
- (id)initWithLaunchdKey:(id)a0 parameters:(id)a1 delegate:(id)a2;
- (id)initWithParameters:(id)a0 delegate:(id)a1 launchdKey:(id)a2 bonjourEndpoint:(id)a3;
- (void)startInternal;

@end
