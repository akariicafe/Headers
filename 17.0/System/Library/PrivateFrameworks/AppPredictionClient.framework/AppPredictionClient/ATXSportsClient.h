@class NSString, NSXPCConnection;

@interface ATXSportsClient : NSObject <ATXSportsInterface> {
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)requestedSchedulesForTeamsWithReply:(id /* block */)a0;

@end
