@class NSUserDefaults, ATXChinSuggestionRequest, NSObject;
@protocol OS_dispatch_queue;

@interface ATXChinSuggestionThrottlingManager : NSObject {
    double _maxWallClockTimeCredits;
    double _wallClockTimeCreditsReplenishingRate;
    BOOL _requestProcessingQueueInUse;
    ATXChinSuggestionRequest *_pendingRequest;
    NSObject<OS_dispatch_queue> *_requestManagementQueue;
    NSObject<OS_dispatch_queue> *_requestProcessingQueue;
    NSUserDefaults *_defaults;
    unsigned long long _debuggingRequestSequenceNumber;
}

- (double)now;
- (id)init;
- (void).cxx_destruct;
- (void)scheduleRequest:(id)a0;
- (void)logRejectedEventToCoreAnalytics;
- (void)logAcceptedEventToCoreAnalytics;
- (void)logReceivedEventToCoreAnalytics;
- (void)_acceptOrRejectPendingRequestIfExists;
- (void)_acceptPendingRequest;
- (void)_rejectPendingRequest;
- (void)logWallClockTimeToCoreAnalytics:(double)a0;
- (void)replenishWallClockTimeCredits;
- (void)setTimestampWallClockTimeCreditsLastReplenished:(double)a0;
- (void)setWallClockTimeCredits:(double)a0;
- (double)timestampWallClockTimeCreditsLastReplenished;
- (double)wallClockTimeCredits;

@end
