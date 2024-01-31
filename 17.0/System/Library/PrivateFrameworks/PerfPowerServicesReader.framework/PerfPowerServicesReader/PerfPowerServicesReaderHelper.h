@class NSXPCConnection;

@interface PerfPowerServicesReaderHelper : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToServer;

- (void).cxx_destruct;
- (void)closeXPCConnection;
- (id)createXPCConnection;
- (id)postDataRequest:(id)a0 outError:(id *)a1;

@end
