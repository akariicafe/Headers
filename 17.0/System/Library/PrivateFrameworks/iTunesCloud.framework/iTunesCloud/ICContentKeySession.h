@class ICFileContentKeyStore, NSString, AVContentKeySession, NSURL, NSSet, NSMutableDictionary, NSObject, NSMutableSet, NSMutableArray, ICStoreRequestContext, NSNumber;
@protocol ICContentKeySessionDelegateProtocol, ICContentKeyStoreProtocol, OS_dispatch_semaphore, OS_dispatch_queue, OS_dispatch_source;

@interface ICContentKeySession : NSObject <AVContentKeySessionDelegate> {
    AVContentKeySession *_contentKeySession;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_pendingKeyIdentifiers;
    NSMutableSet *_pendingRenewalKeyIdentifiers;
    NSMutableArray *_renewalCompletionBlocks;
    NSObject<OS_dispatch_semaphore> *_waitForKeysSemaphore;
    NSSet *_prefetchKeyIdentifiers;
    NSURL *_prefetchKeyServerURL;
    NSURL *_prefetchKeyCertificateURL;
    ICFileContentKeyStore *_prefetchedContentKeyStore;
    NSMutableDictionary *_keyRenewalDates;
    NSMutableDictionary *_completedKeyRequests;
    NSMutableDictionary *_keyResponses;
    NSObject<OS_dispatch_source> *_keyRenewalTimer;
    BOOL _automaticKeyRenewalPaused;
    BOOL _active;
    id<ICContentKeySessionDelegateProtocol> _delegate;
}

@property (class, readonly, nonatomic) NSString *enhancedAudioSharedContentKeyPath;
@property (class, readonly, nonatomic) NSString *pendingInvalidationKeyStorePath;

@property (readonly, nonatomic) ICStoreRequestContext *requestContext;
@property (copy, nonatomic) NSURL *keyServerURL;
@property (copy, nonatomic) NSURL *keyCertificateURL;
@property (copy, nonatomic) NSNumber *adamID;
@property (copy, nonatomic) NSString *playbackToken;
@property (nonatomic) BOOL bypassCache;
@property (nonatomic) BOOL requestOfflineKeys;
@property (nonatomic) BOOL allowFallbackToStreamingKeys;
@property (nonatomic) long long keyServerProtocolType;
@property (readonly, nonatomic) id<ICContentKeyStoreProtocol> keyStore;
@property (copy, nonatomic) NSURL *streamingleaseStopURL;
@property (copy, nonatomic) NSURL *offlineLeaseStartURL;
@property (copy, nonatomic) NSURL *offlineLeaseStopNonceURL;
@property (copy, nonatomic) NSURL *offlineLeaseStopURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)copyKeysToPendingInvalidationStoreFromPath:(id)a0;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)contentKeySession:(id)a0 didProvidePersistableContentKeyRequest:(id)a1;
- (void)contentKeySession:(id)a0 didProvideContentKeyRequest:(id)a1;
- (id)initWithRequestContext:(id)a0;
- (void)contentKeySession:(id)a0 contentKeyRequest:(id)a1 didFailWithError:(id)a2;
- (void)contentKeySession:(id)a0 contentKeyRequestDidSucceed:(id)a1;
- (void)contentKeySession:(id)a0 didProvideRenewingContentKeyRequest:(id)a1;
- (void)addAsset:(id)a0;
- (void)removeAsset:(id)a0;
- (void)_finishProcessingKeyWithIdentifier:(id)a0;
- (void)_invalidateKeyWithIdentifier:(id)a0 forAdamID:(id)a1 offline:(BOOL)a2 usingAccountDSID:(id)a3 keyData:(id)a4 withCompletion:(id /* block */)a5;
- (void)_performKeyDeliveryRequestForContentKeyRequest:(id)a0 persistResponse:(BOOL)a1 isRenewal:(BOOL)a2;
- (void)_processKeyWithIdentifier:(id)a0;
- (void)_renewExpiredKeys;
- (void)_scheduleKeyRefreshTimer;
- (void)addAsset:(id)a0 shouldPreloadKeys:(BOOL)a1 waitForKeyIdentifiers:(BOOL)a2;
- (id)initWithRequestContext:(id)a0 keyStore:(id)a1;
- (id)initWithRequestContext:(id)a0 keyStore:(id)a1 delegate:(id)a2;
- (void)invalidateKeyWithIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (void)pauseAutomaticKeyRenewal;
- (void)processKeyWithIdentifier:(id)a0;
- (void)resumeAutomaticKeyRenewal;
- (void)stopSessionInvalidatingKeys:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)waitForAllKeysToProcess;
- (void)waitForAllKeysToProcessWithTimeout:(double)a0;
- (void)waitForKeyRenewalsWithCompletionHandler:(id /* block */)a0;

@end
