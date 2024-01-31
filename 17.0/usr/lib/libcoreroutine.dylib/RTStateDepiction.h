@class NSString, RTStateDepictionOneState, RTMapItem, RTStateModelLocation, NSDate;
@protocol GEOMapItem;

@interface RTStateDepiction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RTStateDepictionOneState *clusterState;
@property (nonatomic) long long numOfDataPts;
@property (nonatomic) unsigned long long mapItemSource;
@property (retain, nonatomic) id<GEOMapItem> geoMapItem;
@property (retain, nonatomic) RTStateModelLocation *location;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long typeSource;
@property (retain, nonatomic) RTMapItem *mapItem;
@property (retain, nonatomic) NSDate *geocodeDate;
@property (copy, nonatomic) NSString *customLabel;

+ (double)quantizeTimeIntervalSinceReferenceDate:(double)a0;
+ (long long)maximumNumberOfDataPoints;

- (void)addOneVisitsFromStateDepiction:(id)a0;
- (BOOL)exemptFromPurge;
- (id)init;
- (void)_performErrorCorrection;
- (void)incrementNumOfDataPtsByInteger:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)getRecentVisits:(double)a0;
- (void)removeEntry:(double)a0 exit:(double)a1;
- (double)calculateStandardDeviationWithOptions:(id)a0 error:(id *)a1;
- (double)_calculateStandardDeviationForDates:(id)a0 options:(id)a1 error:(id *)a2;
- (void)showState;
- (id)_excludeEntryExitOutlierDates:(id)a0 options:(id)a1;
- (unsigned long long)getNumOfVisitsOverall;
- (id)getAggStateStat;
- (double)getAggTimeScaleFactor:(double)a0 predictionWindow:(double)a1;
- (void)removeAllVisitsExceptMostRecent;
- (id)description;
- (id)_filterEntryExitData:(id)a0 options:(id)a1;
- (id)initWithLocation:(id)a0 type:(long long)a1 typeSource:(unsigned long long)a2 customLabel:(id)a3 mapItem:(id)a4;
- (id)lastEntyExit;
- (id)getAllOneVisits;
- (id)getGetWeeklyStats:(double)a0 numOfWeeks:(int)a1 uniqueID:(id)a2;
- (void).cxx_destruct;
- (void)_performIntegrityCheck;
- (id)getPredState:(double)a0 predictionWindow:(double)a1 numOfWeeks:(int)a2 uniqueID:(id)a3;
- (id)_referenceAdjustEntryExitDates:(id)a0 options:(id)a1;
- (BOOL)cleanState:(double)a0;
- (id)getEarliestLatestEntry;
- (double)getLastVisit;
- (id)initWithCoder:(id)a0;
- (void)submitEntry:(double)a0 exit:(double)a1;

@end
