@class NSString, NSXPCConnection;

@interface WBSCloudHistoryPushAgentProxy : NSObject <WBSCloudHistoryPushAgent> {
    NSXPCConnection *_agentConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)queryMemoryFootprintWithError:(id *)a0;
- (void)acknowledgePendingPushNotifications;
- (void)getPushNotifications:(id /* block */)a0;
- (void).cxx_destruct;
- (void)queryMemoryFootprint:(id /* block */)a0;
- (void)clearAcknowledgedPushNotifications;

@end
