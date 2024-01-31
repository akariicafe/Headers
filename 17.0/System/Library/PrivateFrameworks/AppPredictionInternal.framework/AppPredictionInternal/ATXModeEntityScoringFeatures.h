@class NSString, NSArray;
@protocol NSObject, ATXModeEntityProtocol, ATXJSONSerializableProtocol;

@interface ATXModeEntityScoringFeatures : NSObject <ATXJSONSerializableProtocol>

@property (retain, nonatomic) NSString *modeDescription;
@property (nonatomic) double posteriorProbability;
@property (nonatomic) double classConditionalProbability;
@property (nonatomic) unsigned long long uniqueOccurrencesInMode;
@property (nonatomic) unsigned long long modeOccurrences;
@property (nonatomic) unsigned long long localOccurrences;
@property (nonatomic) unsigned long long globalOccurrences;
@property (nonatomic) double modePopularity;
@property (nonatomic) double globalPopularity;
@property (nonatomic) double ratioModeAndGlobalPopularity;
@property (nonatomic) unsigned long long localOccurrencesAcrossAllEntities;
@property (retain, nonatomic) NSArray *totalModeLaunchesHistogramForLast28Days;
@property (retain, nonatomic) NSArray *totalGlobalLaunchesHistogramForLast28Days;
@property (retain, nonatomic) id<ATXModeEntityProtocol> entity;
@property (retain, nonatomic) NSString *entityDescription;
@property (retain, nonatomic) id<NSObject, ATXJSONSerializableProtocol> entitySpecificFeatures;
@property (retain, nonatomic) NSArray *macPortableGlobalAppLaunchesHistogramForLast28Days;
@property (retain, nonatomic) NSArray *macPortableModeAppLaunchesHistogramForLast28Days;
@property (retain, nonatomic) NSArray *macDesktopGlobalAppLaunchesHistogramForLast28Days;
@property (retain, nonatomic) NSArray *macDesktopModeAppLaunchesHistogramForLast28Days;
@property (retain, nonatomic) NSArray *localDeviceGlobalAppLaunchesHistogramForLast28Days;
@property (retain, nonatomic) NSArray *localDeviceModeAppLaunchesHistogramForLast28Days;

- (id)init;
- (id)initFromJSON:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (BOOL)entityOccurredGloballyOverLastNDays:(unsigned long long)a0;
- (BOOL)entityOccurredInModeOverLastNDays:(unsigned long long)a0;
- (BOOL)entityOccurredOverLastNDays:(unsigned long long)a0 withHistogram:(id)a1;

@end
