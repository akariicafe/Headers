@class NSDate, RTFixedSizeQueue, NSString, RTDefaultsManager, RTDistanceCalculator, RTLearnedLocationManager, SMSessionStore, NSObject;
@protocol OS_dispatch_queue;

@interface SMSessionMetricManager : NSObject <SMSessionManagerObserverProtocol>

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) SMSessionStore *sessionStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDate *sessionStartDate;
@property (retain, nonatomic) NSDate *sessionEndDate;
@property (retain, nonatomic) RTFixedSizeQueue *etaUpdateStateQueue;
@property (retain, nonatomic) RTFixedSizeQueue *etaUpdateSubmissionQueue;
@property (nonatomic) double closestTimeIntervalToExceedingETA;
@property (nonatomic) unsigned long long sessionType;
@property (nonatomic) double initialDestinationExpectedTravelTime;
@property (nonatomic) double previousCrowFliesETA;
@property (nonatomic) double previousMapsExpectedETA;
@property (nonatomic) double maxCrowFliesScaleFactor;
@property (nonatomic) double maxMapsETAScaleFactor;
@property (nonatomic) BOOL didDestinationAnomalyTrigger;
@property (nonatomic) BOOL noProgressTriggered;
@property (nonatomic) BOOL routeDeviationTriggered;
@property (nonatomic) BOOL didArriveSafely;
@property (nonatomic) BOOL sosTriggered;
@property (nonatomic) BOOL userEndedSession;
@property (nonatomic) BOOL didTriggerOccur;
@property (nonatomic) double initialDistance;
@property (nonatomic) unsigned long long sessionDestinationType;
@property (nonatomic) double ratioOfFirstAnomalyDistanceToTotalDistance;
@property (nonatomic) double mostRecentLocationDistance;
@property (nonatomic) double originalNominalTravelTime;
@property (nonatomic) unsigned long long firstAnomalyTriggerCategoryEnum;
@property (nonatomic) int numExtensions;
@property (nonatomic) unsigned long long originatingLocationTypeEnum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onDailyMetricsNotification:(id)a0;
- (void)_setup;
- (void)_reset;
- (void)submitMetrics;
- (void).cxx_destruct;
- (void)setup;
- (void)_onDailyMetricsNotification:(id)a0;
- (id)_createInitiatorPerSessionDetailsMetricDictionary;
- (id)_createMetricDictionary;
- (void)_updateETASubmissionStates;
- (void)cacheMostRecentLocationDistance:(double)a0;
- (id)collectDestinationSessionMetrics;
- (id)collectInitiatorPerSessionMetrics;
- (id)initWithDefaultsManager:(id)a0 learnedLocationManager:(id)a1 sessionStore:(id)a2;
- (void)initialDistance:(double)a0;
- (void)onCrowFliesETAUpdate:(double)a0;
- (void)onDeclareAnomalyForTriggerCategory:(unsigned long long)a0;
- (void)onMapsETAUpdate:(double)a0;
- (void)onSessionChangedWithConfiguration:(id)a0;
- (void)onSessionEndedWithReason:(unsigned long long)a0;
- (void)onSessionStartedWithState:(id)a0;
- (void)onShouldUpdateETAUpperBoundWithETAUpdateState:(id)a0;
- (void)updateClosestTimeIntervalToExceedingETAWithTimeInterval:(double)a0;

@end
