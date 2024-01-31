@class NSHashTable, NSString, NSArray, PKSecureElementPass, PKPaymentWebService, NSObject, PKPassShare, PKContactResolver;
@protocol OS_dispatch_queue, PKPaymentDataProvider;

@interface PKSharedPassSharesController : NSObject <PKPaymentDataProviderDelegate> {
    PKContactResolver *_contactResolver;
    PKPaymentWebService *_webService;
    id<PKPaymentDataProvider> _paymentServiceProvider;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _featureSupported;
    BOOL _isPerformingBatchOpperation;
    NSHashTable *_delegates;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _delegateLock;
}

@property (readonly, nonatomic) PKSecureElementPass *pass;
@property (readonly, nonatomic) NSArray *shares;
@property (readonly, nonatomic) NSArray *shareableEntitlements;
@property (readonly, nonatomic) NSArray *myEntitlements;
@property (readonly, nonatomic) NSArray *rootShares;
@property (readonly, nonatomic) NSArray *nonLocalShares;
@property (readonly, nonatomic) BOOL sharingEnabled;
@property (readonly, nonatomic) BOOL hasRevokableShares;
@property (readonly, nonatomic) unsigned long long maxEntitlementSelectionCount;
@property (readonly, nonatomic) BOOL canAllowResharing;
@property (readonly, nonatomic) PKPassShare *mostRecentlyCreatedShare;
@property (readonly, nonatomic) BOOL isCrossPlatformSharingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void)sharesDidUpdateWithPaymentPassWithUniqueIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)_feature;
- (void)didUpdateShares;
- (id)_contactResolver;
- (void)_immobilizerTokenCountWithCompletion:(id /* block */)a0;
- (unsigned long long)_numberOfSharesPartnerDoesNotKnowAbout;
- (long long)_randomCodeOfLength:(long long)a0;
- (id)_sharingActivationConfigurationForChannel:(id)a0 channelRisk:(long long)a1;
- (long long)_totalPendingCredentialShares;
- (long long)_totalPendingShares;
- (void)addDefaultShareActivationOptionsToShare:(id)a0 availableOptions:(id *)a1 allowUserEdit:(BOOL *)a2 channelBundleIdentifier:(id)a3 isRecipientKnownContact:(BOOL)a4;
- (id)allowedSharingChannels;
- (id)baseNewShareForPass;
- (id)blockedSharingChannels;
- (void)canSendInvitationWithCompletion:(id /* block */)a0;
- (id)childSharesOfShare:(id)a0;
- (id)contactForShare:(id)a0;
- (void)createShareWithPartialShare:(id)a0 authorization:(id)a1 completion:(id /* block */)a2;
- (id)entitlementsForShare:(id)a0;
- (void)fetchContactForShare:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithPass:(id)a0 contactResolver:(id)a1 webService:(id)a2 paymentServiceProvider:(id)a3 queue:(id)a4;
- (id)initWithPass:(id)a0 webService:(id)a1 paymentServiceProvider:(id)a2 queue:(id)a3;
- (BOOL)isSharingChannelBlockedForChannel:(id)a0 isRecipientKnownContact:(BOOL)a1;
- (void)prewarmCreateShare;
- (void)revokeAllSharesWithCompletion:(id /* block */)a0;
- (void)revokeShare:(id)a0 shouldCascade:(BOOL)a1 withCompletion:(id /* block */)a2;
- (id)senderShareForShare:(id)a0;
- (id)shareForShareIdentifier:(id)a0;
- (id)shareInitiationActivationConfigurationForChannelBundleIdentifier:(id)a0 isRecipientKnownContact:(BOOL)a1;
- (void)updateEntitlementsWithCompletion:(id /* block */)a0;
- (void)updateShare:(id)a0 authorization:(id)a1 completion:(id /* block */)a2;
- (void)updateSharesWithCompletion:(id /* block */)a0;

@end
