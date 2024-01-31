@class NSMutableDictionary, NSArray, NSMutableSet, VCDispatchTimer, NSObject, NSNumber;
@protocol VCLinkProbingHandlerDelegate, OS_dispatch_queue;

@interface VCLinkProbingHandler : NSObject {
    id<VCLinkProbingHandlerDelegate> _linkProbingHandlerDelegate;
    VCDispatchTimer *_queryProbingResultsTimer;
    VCDispatchTimer *_probingLockdownTimer;
    VCDispatchTimer *_requestStatsTimer;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableDictionary *_aggregatedProbingResults;
    NSArray *_linkPreferenceOrder;
    unsigned int _linkProbingInterval;
    unsigned int _linkProbingTimeout;
    unsigned int _linkProbingQueryResultsInterval;
    unsigned int _minSentRequestCountThreshold;
    unsigned char _linkProbingState;
    double _lastLinkPreferenceUpdateNotificationTime;
    double _linkProbingConnectionLockdownPeriod;
    double _expMovMeanFactor;
    double _plrEnvelopeAttackFactor;
    double _plrEnvelopeDecayFactor;
    NSArray *_plrBuckets;
    struct { unsigned char linkProbingCapabilityVersion; unsigned int linkProbingQueryResultsInterval; double expMovMeanFactor; double envelopeAttackFactor; double envelopeDecayFactor; NSArray *plrBuckets; } _linkProbingResultConfig;
    BOOL _isProbingLockedOut;
    double _probingStartTime;
    double _probingLockoutStartTime;
    double _linkProbingLockdownPeriod;
    unsigned int _linkProbingDuplicationWaitTimeout;
    unsigned int _consecutiveIdenticalQueryResultMax;
    unsigned int _consecutiveIdenticalQueryResultCount;
    unsigned int _linkProbingQRStatFrequency;
    unsigned int _linkProbingQRStatRequestMaxCount;
    double _inkProbingQRStatRequestMaxRTT;
    unsigned char _qrLinkProbingState;
    NSNumber *_qrLinkID;
    unsigned long long _requestStatsIdentifier;
    NSMutableDictionary *_activeQRStatRequests;
}

@property id<VCLinkProbingHandlerDelegate> linkProbingHandlerDelegate;
@property unsigned char linkProbingCapabilityVersion;
@property (readonly) BOOL isLinkProbingActive;
@property (readonly) NSMutableSet *activelyProbingLinkIDs;
@property BOOL isDuplicationEnabled;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)dispatchedUpdateProbingResults:(id)a0;
- (void)dispatchedUpdateQRProbingResult:(id)a0;
- (void)flushProbingResults:(id)a0;
- (id)getProbingResultsForLinkID:(id)a0;
- (BOOL)isValidProbingResult:(id)a0;
- (void)loadStorebagValues;
- (void)probingLockdownEnded;
- (void)queryProbingResults;
- (void)removeProbingResultsForLinks:(id)a0;
- (void)requestStats;
- (void)resetAggregatedProbingResults;
- (void)setLinkProbingResultConfig;
- (void)setQRLinkID:(id)a0;
- (void)startActiveProbingOnLinks:(id)a0;
- (void)startActiveProbingQRLink;
- (void)stopActiveProbingOnLinks:(id)a0 resetStats:(BOOL)a1;
- (void)stopActiveProbingQRLink;
- (void)updateLinkPreferenceOrder;
- (void)updateProbingResults:(id)a0;
- (void)updateQRProbingResult:(id)a0;

@end
