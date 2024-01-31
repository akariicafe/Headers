@class NSXPCConnection;

@interface TSXClient : NSObject {
    BOOL _invalidated;
}

@property (readonly) NSXPCConnection *serverConnection;

+ (id)serverProtocol;
+ (id)serviceName;
+ (id)clientProtocol;

- (id)init;
- (void)dealloc;
- (void)interruptedConnection;
- (id)exportedObject;
- (void).cxx_destruct;
- (void)invalidatedConnection;

@end
