@interface TATrackingAvoidanceServiceSettings : NSObject

@property (readonly, nonatomic) BOOL enableTAFilterGeneral;
@property (readonly, nonatomic) BOOL enableTAFilterVisits;
@property (readonly, nonatomic) BOOL enableTAFilterSingleVisit;
@property (readonly, nonatomic) BOOL enableTAFilterLeavingLOI;
@property (readonly, nonatomic) double classificationTimeInterval;

- (id)initWithEnableTAFilterGeneralOrDefault:(id)a0 enableTAFilterVisitsOrDefault:(id)a1 enableTAFilterSingleVisitOrDefault:(id)a2 enableTAFilterLeavingLOIOrDefault:(id)a3 classificationTimeIntervalOrDefault:(id)a4;
- (id)initWithDefaults;
- (id)initWithEnableTAFilterGeneral:(BOOL)a0 enableTAFilterVisits:(BOOL)a1 enableTAFilterSingleVisit:(BOOL)a2 enableTAFilterLeavingLOI:(BOOL)a3 classificationTimeInterval:(double)a4;

@end
