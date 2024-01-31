@class NSString;

@interface HMDHomeRemoteEventRouterClientFactory : NSObject <HMDHomeRemoteEventRouterClientFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)primaryResidentClientWithMessageTargetUUID:(id)a0 queue:(id)a1 dataSource:(id)a2 messageDispatcher:(id)a3 notificationCenter:(id)a4 requestMessageName:(id)a5 updateMessageName:(id)a6 storeReadHandle:(id)a7 storeWriteHandle:(id)a8;
- (id)residentClientWithAccessoryUUID:(id)a0 homeUUID:(id)a1 queue:(id)a2 dataSource:(id)a3 messageDispatcher:(id)a4 notificationCenter:(id)a5 requestMessageName:(id)a6 updateMessageName:(id)a7 storeReadHandle:(id)a8 storeWriteHandle:(id)a9;

@end
