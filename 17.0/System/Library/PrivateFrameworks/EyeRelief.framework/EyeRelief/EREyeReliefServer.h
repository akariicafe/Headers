@class NSXPCListener, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface EREyeReliefServer : NSObject <NSXPCListenerDelegate, EREyeReliefProtocol>

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSMutableArray *clientConnections;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (copy, nonatomic) id /* block */ distanceSamplingToggleHandler;
@property (copy, nonatomic) id /* block */ isDistanceSamplingEnabledHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedServer;

- (id)init;
- (void)isDistanceSamplingEnabled:(id /* block */)a0;
- (void)startServer;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)toggleDistanceSampling:(id /* block */)a0;

@end
