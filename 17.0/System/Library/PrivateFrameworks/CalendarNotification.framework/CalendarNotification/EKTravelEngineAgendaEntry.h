@class EKTravelEngineOriginalEvent, CalGeocoder, EKTravelEngineHypothesis, EKTravelEngineThrottle, CLLocation, NSObject, NSData;
@protocol OS_dispatch_queue, CALNRouteHypothesizerProvider, CALNRouteHypothesizer;

@interface EKTravelEngineAgendaEntry : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) EKTravelEngineOriginalEvent *originalEventInternal;
@property (retain, nonatomic) EKTravelEngineThrottle *throttle;
@property (retain, nonatomic) CalGeocoder *geocoder;
@property (readonly, nonatomic) id<CALNRouteHypothesizerProvider> hypothesizerProvider;
@property (retain, nonatomic) id<CALNRouteHypothesizer> hypothesizer;
@property (retain, nonatomic) EKTravelEngineHypothesis *latestHypothesis;
@property (retain, nonatomic) CLLocation *geoLocation;
@property (retain, nonatomic) NSData *mapKitHandle;
@property (nonatomic) BOOL geocodedEventEncountered;
@property (nonatomic) BOOL hypothesizerSentAtLeastOneHypothesis;
@property (nonatomic) long long travelTimeThresholdExceededState;
@property (nonatomic) double maximumTravelDurationEncountered;
@property (readonly, nonatomic) EKTravelEngineOriginalEvent *originalEvent;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) id /* block */ entrySignificantlyChangedBlock;
@property (nonatomic) BOOL dismissed;

+ (double)fuzzyMaximumInitialUpdateIntervalBeforeStartDate;

- (BOOL)receivedAlarmNamed:(id)a0;
- (void)reset;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_clearEverything;
- (id)initWithRouteHypothesizerProvider:(id)a0;
- (void)cancelEmissionHypothesisRefresh;
- (void)_performAnalyticsPostProcessing;
- (void)requestHypothesisRefreshAtDate:(id)a0;
- (void)_accountForGeocodedEventEncounter;
- (void)_createEmissionHypothesisRefreshTimerWithDate:(id)a0;
- (void)_createHypothesisRequestRefreshTimerWithDate:(id)a0;
- (void)_createHypothesizerForDestination:(id)a0;
- (id)_createSyntheticHypothesis;
- (void)_emissionHypothesisRefreshTimerFired;
- (void)_enhanceLocation;
- (id)_generateDestination;
- (void)_hypothesisRefreshTimerFired;
- (void)_requestHypothesisRefreshTimerFired;
- (void)_sendFeedbackToHypothesizerForPostingNotification:(unsigned long long)a0;
- (void)_setUpRouteMonitoring;
- (void)_trackTTLCandidateEvent:(id)a0;
- (void)_uninstallEmissionHypothesisRefreshTimer;
- (void)_uninstallRequestHypothesisRefreshTimer;
- (void)_updateTravelTimeExceededThresholdStateUsingExceededValue:(BOOL)a0;
- (void)_updateWithHypothesis:(id)a0;
- (void)cancelHypothesisRefreshRequest;
- (void)createAlarmWithName:(id)a0 atDate:(id)a1;
- (id)emissionHypothesisRefreshAlarmName;
- (void)removeAlarmWithName:(id)a0;
- (id)requestHypothesisRefreshAlarmName;
- (void)sendFeedbackForPostingLeaveByNotification;
- (void)sendFeedbackForPostingLeaveNowNotification;
- (void)updateHypothesizerIfNecessaryWithOriginalEvent:(id)a0;

@end
