@class SKStatusSubscriptionService, NSString, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface IMDAvailabilityVerificationManager : NSObject <SKStatusSubscriptionServiceDelegate>

@property (retain, nonatomic) SKStatusSubscriptionService *availabilitySubscriptionService;
@property (retain, nonatomic) NSCache *subscriptionValidationTokenByHandleIDCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateWorkQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)availabilityStatusTypeIdentifier;
+ (BOOL)deviceSupportsSubscriptionValidationTokens;

- (id)init;
- (void).cxx_destruct;
- (void)subscriptionInvitationReceived:(id)a0;
- (void)subscriptionReceivedStatusUpdate:(id)a0;
- (void)subscriptionServiceDaemonDisconnected:(id)a0;
- (void)subscriptionStateChanged:(id)a0;
- (void)_inviteSenderHandleID:(id)a0 fromHandleID:(id)a1;
- (void)_validatePersonalStatusSubscriptionMatchesSubscriptionValidationToken:(id)a0 encryptionValidationToken:(id)a1 fromSender:(id)a2 completion:(id /* block */)a3;
- (id)cachedAvailabilityVerificationTokensForHandleID:(id)a0;
- (void)populateCacheWithAvailbailityVerificationTokensForHandleID:(id)a0;
- (void)verifyPersonalSubscriptionMatchesSubscriptionValidationToken:(id)a0 encryptionValidationToken:(id)a1 receivedByHandleID:(id)a2 fromHandleID:(id)a3 messageDate:(id)a4;

@end
