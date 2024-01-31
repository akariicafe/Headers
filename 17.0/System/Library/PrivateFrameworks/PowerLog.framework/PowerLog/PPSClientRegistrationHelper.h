@class NSXPCConnection;

@interface PPSClientRegistrationHelper : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToServer;

- (void).cxx_destruct;
- (void)closeXPCConnection;
- (id)createXPCConnection;
- (BOOL)permissionsForSubsystem:(id)a0 category:(id)a1;

@end
