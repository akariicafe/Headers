@class NSString, NSMutableDictionary;

@interface LABaseServiceManager : LABaseService <LAServiceManager> {
    NSMutableDictionary *_sessions;
}

@property (readonly, nonatomic) unsigned long long sessionsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;

- (id)init;
- (void).cxx_destruct;
- (void)shutdownSessionsWithMatchingID:(id)a0;
- (void)_shutdownSessionsWithServiceType:(id)a0;
- (BOOL)allowsMultipleClientsForServiceType:(id)a0;
- (void)bootstrapServiceWithType:(id)a0 clientConnection:(id)a1 completionHandler:(id /* block */)a2;
- (void)bootstrapSessionServiceType:(id)a0 clientID:(id)a1 clientConnection:(id)a2 completionHandler:(id /* block */)a3;
- (void)bootstrapSessionServiceType:(id)a0 clientID:(id)a1 completionHandler:(id /* block */)a2;

@end
