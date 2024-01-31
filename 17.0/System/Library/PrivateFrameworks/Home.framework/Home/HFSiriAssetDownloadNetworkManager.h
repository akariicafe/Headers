@class COMessageSessionProducer, COMessageSessionRequest, COClusterMemberRoleSnapshot;

@interface HFSiriAssetDownloadNetworkManager : NSObject <COMessageSessionProducerDelegate> {
    void /* unknown type, empty encoding */ memberReply;
    void /* unknown type, empty encoding */ memberStatus;
    void /* unknown type, empty encoding */ sadlog;
    void /* unknown type, empty encoding */ channel;
}

@property (class, nonatomic, readonly) HFSiriAssetDownloadNetworkManager *shared;

- (id)init;
- (void).cxx_destruct;
- (void)channel:(id)a0 didAddProducer:(id)a1;
- (void)channel:(id)a0 didFailToAddProducerWithSubTopic:(id)a1 error:(id)a2;
- (unsigned long long)immediateStatusForIdentifierWithUuidstr:(id)a0;
- (void)producer:(id)a0 didFailToStartSessionWithMember:(id)a1 error:(id)a2;
- (void)producer:(id)a0 didStartSession:(id)a1 member:(id)a2 response:(id)a3;
- (void)producer:(id)a0 didStopSession:(id)a1 initiator:(id)a2 notice:(id)a3 error:(id)a4;
- (void)producer:(COMessageSessionProducer *)a0 shouldStartSessionWithMember:(COClusterMemberRoleSnapshot *)a1 completionHandler:(void (^)(BOOL, COMessageSessionRequest *))a2;
- (void)requestStatus:(id)a0;
- (void)statusForIdentifierWithUuidstr:(id)a0 replyHandler:(id /* block */)a1;

@end
