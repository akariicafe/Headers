@class NSXPCConnection;

@interface STSettingsServiceClient : NSObject

@property (retain) NSXPCConnection *connection;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)processSettingsChangesSinceHistoryToken:(id)a0 error:(id *)a1;

@end
