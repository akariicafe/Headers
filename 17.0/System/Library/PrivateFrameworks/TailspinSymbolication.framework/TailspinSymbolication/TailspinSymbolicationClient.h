@class NSXPCConnection;

@interface TailspinSymbolicationClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (void).cxx_destruct;
- (void)invalidateConnection;
- (void)_initConnection;
- (id)symbolicateUUID:(id)a0 pid:(int)a1 path:(id)a2 offsets:(id)a3 options:(id)a4;

@end
