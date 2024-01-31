@class NSMutableArray, NSDate;

@interface RTLearnedLocationEngineTrainingMetrics : NSObject

@property (readonly, nonatomic) NSDate *trainVisitsStart;
@property (readonly, nonatomic) NSDate *trainVisitsStop;
@property (nonatomic) double intervalSinceLastAttempt;
@property (nonatomic) unsigned long long visitCountDevice;
@property (nonatomic) unsigned long long visitCountTotal;
@property (nonatomic) unsigned long long placeCountDevice;
@property (nonatomic) unsigned long long placeCountTotal;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) unsigned long long reason;
@property (nonatomic) BOOL trainedVisits;
@property (nonatomic) unsigned long long locationsProcessed;
@property (nonatomic) double maxIntervalBetweenLocations;
@property (readonly, nonatomic) NSMutableArray *awdVisits;
@property (readonly, nonatomic) NSMutableArray *awdPlaces;
@property (retain) NSMutableArray *visits;
@property (retain) NSMutableArray *places;
@property (nonatomic) unsigned long long visitCountUnlabeled;
@property (nonatomic) unsigned long long wasDeferred;

- (double)latency;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)collectCoreAnalyticsMetrics;
- (void)startTrainingVisits;
- (void)stopTrainingVisits;
- (void)submitPlace:(id)a0 nearbyPlaces:(id)a1;
- (void)submitToCoreAnalytics;
- (void)submitVisit:(id)a0 possibleMapItems:(id)a1 selectedMapItem:(id)a2;

@end
