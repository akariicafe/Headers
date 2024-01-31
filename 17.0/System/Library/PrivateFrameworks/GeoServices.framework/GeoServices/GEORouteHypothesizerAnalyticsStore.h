@class NSDate;

@interface GEORouteHypothesizerAnalyticsStore : NSObject <NSSecureCoding> {
    double _observedEarlyDeltaFromRequiredTimeToLeave;
    double _observedLateDeltaFromRequiredTimeToLeave;
    unsigned long long _hypothesizerRerouteCount;
    unsigned long long _hypothesisCount;
    BOOL _stopped;
    unsigned long long _uiNotificationType;
    NSDate *_lastGenerationDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long etaUpdatesAfterEventStart;
@property (nonatomic) BOOL etaUpdatesWereReported;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didArriveWithExpectedArrivalTime:(id)a0;
- (void)didGenerateHypothesis;
- (void)didReroute;
- (void)didShowUI:(unsigned long long)a0;
- (void)didStartMovingWithExpectedDepartureTime:(id)a0;
- (void)didStopHypothesizing;
- (void)didStopMoving;

@end
