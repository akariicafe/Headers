@class RTPeopleDensityStore, NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface RTPeopleDensityRecord : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDate *firstFetchTime;
@property (retain, nonatomic) NSMutableArray *records;
@property (retain, nonatomic) RTPeopleDensityStore *peopleDensityStore;
@property (nonatomic) unsigned long long maxBundleDuration;

- (void).cxx_destruct;
- (void)_closeDensityBundle:(id)a0;
- (void)_computeDensityScore:(double *)a0 scanDuration:(double *)a1;
- (void)closeDensityBundle:(id)a0;
- (id)fetchOngoingPeopleDensityBundle:(id)a0 endDate:(id)a1;
- (void)getCurrentScoreAndScanDuration:(double *)a0 scanDuraion:(double *)a1;
- (id)initWithQueue:(id)a0 peopleDensityStore:(id)a1 defaultsManager:(id)a2;
- (void)updateRecordOnFetchComplete:(unsigned long long)a0 scanDuration:(double)a1 referenceDate:(id)a2;

@end
