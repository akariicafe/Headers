@class NSMutableDictionary, VCMediaKeyIndex, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface VCSecurityKeyManager : NSObject {
    id _delegate;
    id _reportingAgentWeak;
    NSMutableArray *_unknownKeyIndexList;
    NSMutableDictionary *_sendKeys;
    NSMutableDictionary *_receiveKeys;
    NSMutableDictionary *_prunePendingReceiveKeys;
    VCMediaKeyIndex *_latestSendKeyIndex;
    VCMediaKeyIndex *_latestReceiveKeyIndex;
    VCMediaKeyIndex *_keyIndexNotReceived;
    BOOL _isSendKeysCleanUpPending;
    BOOL _isReceiveKeysCleanUpPending;
    BOOL _forceRemoteMKMMissing;
    double _keyMaterialNotUsedTimeout;
    NSObject<OS_dispatch_queue> *_keyManagerQueue;
    double _lastKeyIndexNotReceived;
    NSObject<OS_dispatch_source> *_pruneTimer;
    NSObject<OS_dispatch_source> *_encryptionKeyRollTimer;
    BOOL _isRunning;
}

@property (nonatomic) struct opaqueRTCReporting { } *reportingAgent;

- (void)dealloc;
- (id)delegate;
- (void)start;
- (void)stop;
- (id)initWithDelegate:(id)a0;
- (id)logPrefix;
- (BOOL)addSecurityKeyMaterial:(id)a0;
- (BOOL)associateMKI:(id)a0 withClientID:(id)a1;
- (id)copyMKMWithPrefix:(id)a0;
- (double)firstExpirationTime;
- (id)getLatestRecvKeyMaterial;
- (id)getLatestSendKeyMaterial;
- (long long)getNotUsedTimeout;
- (id)getRecvKeyMaterialWithIndex:(id)a0;
- (id)getSendKeyMaterialWithIndex:(id)a0;
- (void)handlePruneTimerEventAndReschedule;
- (double)pruneAllExpiredKeys;
- (void)pruneRecvKeyMaterialWithDelay:(double)a0;
- (void)pruneSendKeyMaterialWithDelay:(double)a0;
- (void)releaseTimers;
- (void)scheduleEncryptionRollTimerWithDelay:(double)a0;
- (void)schedulePruneTimer:(double)a0;
- (BOOL)startTimers;
- (void)stopTimers;

@end
