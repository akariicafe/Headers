@class NSXPCInterface, NSXPCConnection;
@protocol AEXPCConnectionOrigin;

@interface AEXPCProxy : NSObject <AEXPCConnection> {
    NSXPCConnection *_connection;
    id<AEXPCConnectionOrigin> _origin;
    NSXPCInterface *_interface;
}

@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;

@end
