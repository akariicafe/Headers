@class NSXPCConnection;

@interface DIXPCManager : NSObject {
    void /* unknown type, empty encoding */ needsCheckIn;
    void /* unknown type, empty encoding */ dispatcher;
    void /* unknown type, empty encoding */ isConnectionValid;
    void /* unknown type, empty encoding */ _connection;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ notifyRegisterToken;
    void /* unknown type, empty encoding */ checkInObservers;
    void /* unknown type, empty encoding */ lock;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ clientContext;
@property (nonatomic, weak) void /* unknown type, empty encoding */ clientQueue;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) NSXPCConnection *connection;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addCheckInObserver:(id)a0;
- (id)initWithClientContext:(id)a0 dispatcher:(id)a1 clientQueue:(id)a2;

@end
