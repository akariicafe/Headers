@class NSXPCConnection;

@interface BYSettingsManagerClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (id)init;
- (BOOL)hasStashedValuesOnDisk;
- (void).cxx_destruct;
- (void)_connectToDaemon;

@end
