@class NSXPCConnection;

@interface ZhuGeLockerArmory : ZhuGeSingletonArmory

@property void /* function */ *logHandler;
@property (retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;

@end
