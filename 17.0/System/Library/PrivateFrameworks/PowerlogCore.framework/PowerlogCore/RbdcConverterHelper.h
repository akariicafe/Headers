@class NSXPCConnection;

@interface RbdcConverterHelper : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToServer;

- (void).cxx_destruct;
- (void)closeXPCConnection;
- (id)createXPCConnection;
- (id)copyRBDCLogsToPath:(id)a0 withServiceType:(int)a1;
- (BOOL)isProcessRbdcAllowed;
- (id)processRbdc:(id)a0 withServiceType:(int)a1;

@end
