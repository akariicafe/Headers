@class NSString, NSMutableSet, NSMutableArray, TVPStateMachine;

@interface VUISecureInvalidationManager : NSObject <VUIStoreFPSKeyLoaderDelegate>

@property (retain, nonatomic) TVPStateMachine *stateMachine;
@property (retain, nonatomic) NSMutableArray *keyLoaders;
@property (retain, nonatomic) NSMutableSet *penaltyBox;
@property (nonatomic) BOOL networkErrorOccurredDuringInvalidation;
@property (nonatomic) unsigned long long backgroundTaskIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_networkReachbilityDidChange:(id)a0;
- (BOOL)_validateParamsForDeletionInfo:(id)a0;
- (id)_invalidateKeysForDeletedVideos;
- (BOOL)_getParamsForDeletionInfo:(id)a0 keyServerURL:(id *)a1 nonceURL:(id *)a2 keyIdentifier:(id *)a3 offlineKeyData:(id *)a4 dsid:(id *)a5 additionalRequestParams:(id *)a6 contentID:(id *)a7;
- (void)_registerStateMachineHandlers;
- (void)_sendInvalidationRequestsForDeletionInfoArrays:(id)a0 completion:(id /* block */)a1;
- (void)_sendInvalidationRequestsForFirstArray:(id)a0 completion:(id /* block */)a1;
- (void)addDeletionInfoToPenaltyBox:(id)a0;
- (void)invalidateKeysForDeletedVideos;
- (void)removeDeletionInfoFromPenaltyBox:(id)a0;
- (BOOL)storeFPSKeyLoader:(id)a0 shouldKeyRequestContinueInvalidationAfterLoadingNonce:(id)a1;

@end
