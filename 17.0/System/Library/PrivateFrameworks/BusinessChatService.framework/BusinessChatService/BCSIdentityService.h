@class NSString, NSMutableDictionary, NSObject;
@protocol BCSIDSServiceFactoryProtocol, BCSIDSQueryControllerProtocol, OS_dispatch_queue, BCSIdentityAccountProtocol;

@interface BCSIdentityService : NSObject <BCSIdentityServiceProtocol> {
    id<BCSIdentityAccountProtocol> _businessChatAccount;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
    NSMutableDictionary *_idStatusCompletionBlocks;
    id<BCSIDSServiceFactoryProtocol> _IDSServiceFactory;
    id<BCSIDSQueryControllerProtocol> _IDSQueryController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)businessChatAccount;
- (void)refreshIDStatusForBizID:(id)a0 completion:(id /* block */)a1;

@end
