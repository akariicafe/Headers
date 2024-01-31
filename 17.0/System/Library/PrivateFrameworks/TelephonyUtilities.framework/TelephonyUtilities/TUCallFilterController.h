@class NSObject;
@protocol OS_dispatch_queue, TUCallFilterControllerActions;

@interface TUCallFilterController : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) id<TUCallFilterControllerActions> actionsDelegate;
@property (readonly, nonatomic) BOOL silenceUnknownCallersEnabled;
@property (readonly, nonatomic) BOOL silenceUnknownFaceTimeCallersEnabled;

- (BOOL)willRestrictAddresses:(id)a0 forBundleIdentifier:(id)a1;
- (id)policyForAddresses:(id)a0 forBundleIdentifier:(id)a1;
- (id)initWithActionsDelegate:(id)a0 serialQueue:(id)a1;
- (BOOL)shouldRestrictAddresses:(id)a0 forBundleIdentifier:(id)a1 performSynchronously:(BOOL)a2;
- (BOOL)containsRestrictedHandle:(id)a0 forBundleIdentifier:(id)a1 performSynchronously:(BOOL)a2;
- (void).cxx_destruct;
- (BOOL)isUnknownAddress:(id)a0 normalizedAddress:(id)a1 forBundleIdentifier:(id)a2;
- (unsigned long long)callFilterStatusForDialRequest:(id)a0;
- (id)addressesToCheckForRestrictionsInConversation:(id)a0;
- (id)bundleIdentifierForCallProvider:(id)a0;
- (BOOL)containsRestrictedHandle:(id)a0 forBundleIdentifier:(id)a1;
- (BOOL)isUnknownHandle:(id)a0;
- (id)restrictedContacts:(id)a0 callProvider:(id)a1;
- (BOOL)shouldRestrictAddresses:(id)a0 forBundleIdentifier:(id)a1;
- (BOOL)shouldRestrictAddresses:(id)a0 performSynchronously:(BOOL)a1;
- (BOOL)shouldRestrictConversation:(id)a0 performSynchronously:(BOOL)a1;
- (BOOL)shouldRestrictDialRequest:(id)a0;
- (BOOL)shouldRestrictDialRequest:(id)a0 performSynchronously:(BOOL)a1;
- (BOOL)shouldRestrictJoinConversationRequest:(id)a0 performSynchronously:(BOOL)a1;

@end
