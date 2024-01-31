@class NSDate, TADisplayOnCalculator, TALocationLite, NSMutableDictionary, NSMutableArray, TACLVisit, NSMutableOrderedSet, NSNumber;

@interface TAVisitSnapshot : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableOrderedSet *lruUtAdvertisementCache;
@property (nonatomic) unsigned long long uniqueUTBufferSizeCap;
@property (nonatomic) unsigned long long displayEventBufferSizeCap;
@property (retain, nonatomic) NSMutableArray *displayEvents;
@property (retain, nonatomic) NSDate *exitIntervalBeginning;
@property (retain, nonatomic) TADisplayOnCalculator *displayOnCalculator;
@property (retain, nonatomic) NSNumber *distanceToClosestLoi;
@property (retain, nonatomic) NSDate *entryDurationOfConsiderationClosed;
@property (nonatomic) unsigned long long maxNSigmaBetweenLastLocationAndVisit;
@property (readonly, nonatomic) BOOL isClosed;
@property (readonly, nonatomic) TACLVisit *representativeVisit;
@property (readonly, copy, nonatomic) TALocationLite *latestLocation;
@property (readonly, nonatomic) unsigned long long loiType;
@property (readonly, nonatomic) NSMutableDictionary *latestUtAdvertisements;
@property (readonly, nonatomic) NSMutableDictionary *earliestUtAdvertisements;
@property (readonly, nonatomic) BOOL latestLocationInsideVisit;

- (unsigned long long)evaluateSnapshotQualityWithMinDwellDuration:(double)a0 minDisplayOnDuration:(double)a1;
- (id)getLocationRepresentingSnapshot;
- (void)addUTAdvertisement:(id)a0;
- (void)updateLatestLocation:(id)a0;
- (void)updateLoiType:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (double)getDisplayOnTimeUntilEndDate:(id)a0;
- (double)getDurationOfVisitExitConsideredWithDisplayOnBudget:(double)a0;
- (void)pruneDisplayEvents;
- (BOOL)setDepartureVisit:(id)a0;
- (double)getDurationOfVisitEntryConsideredWithDisplayOnBudget:(double)a0;
- (void)setRepresentativeVisit:(id)a0;
- (id)initWithTACLVisit:(id)a0 uniqueUTBufferCap:(unsigned long long)a1 displayEventBufferSizeCap:(unsigned long long)a2 maxNSigmaBetweenLastLocationAndVisit:(unsigned long long)a3;
- (id)getDepartureDelay;
- (id)getEntryIntervalEvaluatedUntil;
- (id)mostRecentAdvertisementDate;
- (void).cxx_destruct;
- (id)getEntryAdvertisementsWithDisplayOnBudget:(double)a0;
- (void)addSystemState:(id)a0;
- (void)updateEntryIntervalWithDisplayOnBudget:(double)a0 evaluateToEnd:(BOOL)a1;
- (BOOL)isEqual:(id)a0;
- (void)closeSnapshotCleanup;
- (void)calculateExitIntervalWithDisplayOnBudget:(double)a0;
- (id)getArrivalDelay;
- (id)initWithCoder:(id)a0;
- (id)getExitAdvertisementsWithDisplayOnBudget:(double)a0;
- (void)addScanState:(id)a0;

@end
