@class NSXPCConnection;

@interface TSXAnonymousClient : NSObject {
    BOOL _invalidated;
}

@property (readonly) NSXPCConnection *serverConnection;

+ (id)serverProtocol;
+ (id)clientProtocol;

- (void)dealloc;
- (void)interruptedConnection;
- (id)exportedObject;
- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (void)invalidatedConnection;

@end
