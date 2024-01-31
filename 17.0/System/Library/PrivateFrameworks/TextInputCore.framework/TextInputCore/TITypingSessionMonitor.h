@class NSObject, NSLocale, TITypingSession, TIKeyboardInputManagerConfig, NSMutableArray, TITypingDESRecordWriter, TIDPEventDispatcher, TIBiomeObserver, TIMetricDescriptorRegistry, TISKMetricCollector, TIKBUserModel, TICoreAnalyticsEventDispatcher, TIFeatureUsageMetricsCache, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface TITypingSessionMonitor : NSObject <TITypingSessionMonitoringProtocol> {
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (retain, nonatomic) TIKeyboardInputManagerConfig *config;
@property (retain, nonatomic) TIMetricDescriptorRegistry *metricDescriptorRegistry;
@property (retain, nonatomic) TITypingDESRecordWriter *desRecordWriter;
@property (retain, nonatomic) NSArray *interactionObservers;
@property (retain, nonatomic) NSMutableArray *aggregatedEventObservers;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) TIKBUserModel *userModel;
@property (readonly, nonatomic) TISKMetricCollector *sensorKitMetricCollector;
@property (readonly, nonatomic) TICoreAnalyticsEventDispatcher *coreAnalyticsEventDispatcher;
@property (readonly, nonatomic) TIDPEventDispatcher *differentialPrivacyEventDispatcher;
@property (readonly, nonatomic) TIFeatureUsageMetricsCache *featureUsageMetricsCache;
@property (readonly, nonatomic) TIBiomeObserver *biomeObserver;
@property (readonly, nonatomic) TITypingSession *currentTypingSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldRecordSession:(id)a0;

- (void)acceptingCandidateWithTrigger:(id)a0;
- (void)changingContextWithTrigger:(id)a0;
- (id)resetInteractionObserversForNextSession;
- (void)candidatesOffered:(id)a0 keyboardState:(id)a1;
- (void)contextDidChange:(id)a0 wordDelete:(BOOL)a1 cursorMoved:(BOOL)a2 extendsPriorWord:(BOOL)a3 inWord:(id)a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 selectionLocation:(unsigned long long)a6 keyboardState:(id)a7;
- (id)currentInteractionObservers;
- (void)tearDown;
- (void)addDrawInputWithSyllableCount:(unsigned long long)a0 keyboardState:(id)a1;
- (void)endSessionWithInteractionObservers:(id)a0 sessionParams:(id)a1 timestamp:(id)a2;
- (void)_loadAggregatedEventObservers;
- (id)_typingSessionFromInteractionObservers:(id)a0;
- (void)addKeyInput:(id)a0 keyboardState:(id)a1;
- (void)_loadInteractionObservers;
- (void).cxx_destruct;
- (id)observeSession:(id)a0 sessionParams:(id)a1;
- (void)_lazyLoadAggregatedEventObservers;
- (void)candidateAccepted:(id)a0 withInput:(id)a1 documentState:(id)a2 inputContext:(id)a3 inputStem:(id)a4 predictionBarHit:(BOOL)a5 useCandidateSelection:(BOOL)a6 candidateIndex:(long long)a7 keyboardState:(id)a8;
- (void)layoutDidChange:(id)a0 keyboardState:(id)a1;
- (void)addTouchEvent:(id)a0;
- (id)initWithConfig:(id)a0 metricDescriptorRegistry:(id)a1;
- (void)setClientID:(id)a0 keyboardState:(id)a1;

@end
