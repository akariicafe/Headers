@class NSMutableDictionary, RTProximityEvent, NSHashTable, NSDate;

@interface RTPeopleDiscoveryContactRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *contactRecord;
@property (retain, nonatomic) NSMutableDictionary *contactScores;
@property (retain, nonatomic) NSDate *bundleStartDate;
@property (retain, nonatomic) RTProximityEvent *ongoingProximityEvent;
@property (nonatomic) unsigned long long minObservationDuration;
@property (nonatomic) unsigned long long maxSeparationDuration;
@property (nonatomic) unsigned long long maxBackstopDuration;
@property (nonatomic) unsigned long long maxBundleDuration;
@property (retain, nonatomic) NSHashTable *observers;

+ (id)computeEventMetrics:(id)a0;

- (id)initWithQueue:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionDictionary;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)ingestEvent:(id)a0;
- (void)_fetchAndStoreSignificanceScore:(id)a0;
- (id)_updateContactFrequencyCount:(id)a0;
- (long long)bucketizeFrequencyScore:(double)a0;
- (long long)bucketizeRecencyScore:(double)a0;
- (long long)bucketizeSignificanceScore:(double)a0;
- (void)checkAndCloseProximityEventsIfNeeded:(id)a0;
- (void)createSingleContactRecord:(id)a0;
- (void)generateProximityEventScores:(double)a0 socialScore:(double *)a1 combinedFrequencyScores:(id)a2 combinedRecencyScores:(id)a3 combinedSignificanceScores:(id)a4;
- (id)generateRealtimeProximityEventFromDate:(id)a0 endDate:(id)a1 referenceDate:(id)a2;
- (id)getContactScores:(id)a0;
- (id)getFirstObservationDate:(id)a0;
- (id)getInteractionSessions:(id)a0;
- (id)getLatestAdvertisementDate:(id)a0;
- (id)initWithQueue:(id)a0 defaultsManager:(id)a1;
- (id)initWithQueue:(id)a0 minObservationDuration:(unsigned long long)a1 maxSeparationDuration:(unsigned long long)a2 maxBackstopDuration:(unsigned long long)a3 maxBundleDuration:(unsigned long long)a4;
- (void)injectContactScore:(id)a0;
- (void)mergeWithAnotherContactRecord:(id)a0;
- (void)notifyObserversOnCloseProximityEvent:(id)a0;
- (id)queryContactScoresWithContactIDs:(id)a0;
- (id)queryRealTimeEventsByEventIDs:(id)a0;
- (void)updateContactRecordOnAdvertisementReceived:(id)a0;
- (void)updateDailyContactScores;

@end
