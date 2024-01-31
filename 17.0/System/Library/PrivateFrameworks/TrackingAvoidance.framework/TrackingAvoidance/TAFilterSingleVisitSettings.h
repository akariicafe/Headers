@class TAFilterVisitsSettings, NSSet;

@interface TAFilterSingleVisitSettings : NSObject

@property (readonly, nonatomic) double thresholdOfSignificantDuration;
@property (readonly, nonatomic) double thresholdOfSignificantDistance;
@property (readonly, nonatomic) TAFilterVisitsSettings *visitsSettings;
@property (readonly, nonatomic) NSSet *enabledLoiTypes;
@property (readonly, nonatomic) unsigned long long arrivingWorkImmediacyType;

+ (id)defaultSingleVisitEnabledLoiTypes;

- (id)enabledLoiTypesToString;
- (id)initWithThresholdOfSignificantDuration:(double)a0 thresholdOfSignificantDistance:(double)a1 filterVisitsSettings:(id)a2 enabledLoiTypes:(id)a3 arrivingWorkImmediacyType:(unsigned long long)a4;
- (id)initWithThresholdOfSignificantDurationOrDefault:(id)a0 thresholdOfSignificantDistanceOrDefault:(id)a1 filterVisitsSettingsOrDefault:(id)a2 enabledLoiTypesOrDefault:(id)a3 arrivingWorkImmediacyTypeOrDefault:(id)a4;
- (void).cxx_destruct;
- (id)initWithDefaults;

@end
