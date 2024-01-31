@class NSString;

@interface ASFriendListQuery : HKQuery <ASFriendListQueryClientInterface> {
    id /* block */ _updateHandler;
    int _mostRecentToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterfaceProtocol;
+ (BOOL)supportsTaskServers;

- (void)queue_validate;
- (void)queue_deliverError:(id)a0;
- (void)client_deliverFriendList:(id)a0 queryUUID:(id)a1;
- (void).cxx_destruct;
- (id)initWithUpdateHandler:(id /* block */)a0;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_queryDidDeactivate:(id)a0;

@end
