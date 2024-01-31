@class NSXPCConnection;

@interface ANXPCManager : NSObject {
    void /* unknown type, empty encoding */ _needsCheckIn;
    void /* unknown type, empty encoding */ isConnectionValid;
    void /* unknown type, empty encoding */ _connection;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ notifyRegisterToken;
    void /* unknown type, empty encoding */ checkInObservers;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ machServiceName;
    void /* unknown type, empty encoding */ exportedObject;
    void /* unknown type, empty encoding */ remoteObjectInterface;
    void /* unknown type, empty encoding */ exportedInterface;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ checkInProvider;
@property (nonatomic, readonly) NSXPCConnection *connection;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addCheckInObserver:(id)a0;
- (id)initWithMachServiceName:(id)a0 remoteObjectInterface:(id)a1 exportedInterface:(id)a2 exportedObject:(id)a3;

@end
