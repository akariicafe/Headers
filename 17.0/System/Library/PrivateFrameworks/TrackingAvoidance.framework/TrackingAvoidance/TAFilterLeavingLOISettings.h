@class TAFilterVisitsSettings, NSSet;

@interface TAFilterLeavingLOISettings : NSObject

@property (readonly, nonatomic) double thresholdOfSignificantDuration;
@property (readonly, nonatomic) double thresholdOfSignificantDistance;
@property (readonly, nonatomic) TAFilterVisitsSettings *visitsSettings;
@property (readonly, nonatomic) NSSet *enabledLoiTypes;
@property (readonly, nonatomic) unsigned long long leavingHomeImmediacyType;
@property (readonly, nonatomic) unsigned long long leavingWorkImmediacyType;

+ (id)defaultLeavingLOIEnabledLoiTypes;

- (id)enabledLoiTypesToString;
- (id)initWithThresholdOfSignificantDuration:(double)a0 thresholdOfSignificantDistance:(double)a1 filterVisitsSettings:(id)a2 enabledLoiTypes:(id)a3 leavingHomeImmediacyType:(unsigned long long)a4 leavingWorkImmediacyType:(unsigned long long)a5;
- (void).cxx_destruct;
- (id)initWithThresholdOfSignificantDurationOrDefault:(id)a0 thresholdOfSignificantDistanceOrDefault:(id)a1 filterVisitsSettingsOrDefault:(id)a2 enabledLoiTypesOrDefault:(id)a3 leavingHomeImmediacyTypeOrDefault:(id)a4 leavingWorkImmediacyTypeOrDefault:(id)a5;
- (id)initWithDefaults;

@end
