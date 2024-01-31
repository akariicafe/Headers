@class NSXPCConnection;

@interface STDowntimeClient : NSObject

@property (readonly) NSXPCConnection *connection;

+ (id)_newConnection;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isDowntimeEnabledForUserID:(id)a0;
- (void)toggleOnDemandDowntimeForUserID:(id)a0 completionHandler:(id /* block */)a1;

@end
