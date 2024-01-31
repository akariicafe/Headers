@class RTLocation, NSDate, NSMutableArray, RTLocationShifter;

@interface RTVisitSCIStayCluster : NSObject {
    double _meanOfSquaredLat_deg;
    double _meanOfSquaredLon_deg;
    _Complex double _sumOfVectorLon;
    double _motionInducedDev_m;
    NSDate *_lastProcessedSampleDateForAdaption;
    NSMutableArray *_residuePoints;
}

@property (readonly, nonatomic) unsigned long long numOfDataPoints;
@property (readonly, nonatomic) unsigned long long numOfOutliers;
@property (readonly, nonatomic) unsigned long long numOfResiduePoints;
@property (readonly, nonatomic) unsigned long long numOfAdaptionSample;
@property (readonly, nonatomic) NSDate *potentialEntry;
@property (readonly, nonatomic) NSDate *potentialExit;
@property (readonly, nonatomic) NSDate *lastProcessedSample;
@property (readonly, nonatomic) NSMutableArray *outliers;
@property (readonly, nonatomic) RTLocation *centroid;
@property (readonly, nonatomic) RTLocation *lastTrustedLocation;
@property (readonly, nonatomic) RTLocationShifter *locationShifter;

+ (double)evalMaxUncFromMotionDevMotionInducedDev:(double)a0 andMeasInducedDev:(double)a1;
+ (double)evaluateMotionInducedDeviationFromMeanLat:(double)a0 meanOfSquaredLat_deg:(double)a1 meanLon_deg:(double)a2 meanOfSquaredLon_deg:(double)a3;
+ (double)evaluateClustThresFromClustThresSlv:(double)a0 motionInducedDev:(double)a1 adaptionBasis:(double)a2 adaptionSampleCnt:(long long)a3 adaptionRate:(double)a4;

- (id)init;
- (double)getRadiusForDate:(id)a0;
- (void)updateLastTrustedLocation:(id)a0;
- (double)dwellTimeIntervalWithDate:(id)a0;
- (id)createVisit:(long long)a0 confidence:(double)a1;
- (id)description;
- (void).cxx_destruct;
- (id)centroidForVisitType:(long long)a0 confidence:(double)a1;
- (void)addNewPoint:(id)a0 event:(unsigned long long)a1 lcFSMState:(unsigned long long)a2 fsmState:(unsigned long long)a3;
- (void)addOutlier:(id)a0;

@end
