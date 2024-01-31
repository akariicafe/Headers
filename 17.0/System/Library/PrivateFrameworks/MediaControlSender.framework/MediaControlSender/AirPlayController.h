@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface AirPlayController : NSObject <AirPlayControllerAsync, AirPlayControllerSync> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_cnx;
}

@property (copy, nonatomic) NSString *xpcName;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)_setupConnection;
- (void)getProperty:(id)a0 qualifier:(id)a1 completion:(id /* block */)a2;
- (id)getProperty:(id)a0 qualifier:(id)a1 status:(int *)a2;
- (void)performCommand:(id)a0 qualifier:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (int)performCommand:(id)a0 qualifier:(id)a1 params:(id)a2 response:(id *)a3;
- (void)postEvent:(id)a0 qualifier:(id)a1 params:(id)a2;
- (void)postEvent:(id)a0 qualifier:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (int)setProperty:(id)a0 qualifier:(id)a1 value:(id)a2;
- (void)setProperty:(id)a0 qualifier:(id)a1 value:(id)a2 completion:(id /* block */)a3;

@end
