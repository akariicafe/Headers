@interface DRSTaskingLimitingParameters : NSObject

@property (readonly, nonatomic) unsigned long long acceptedConfigCountCap;
@property (readonly, nonatomic) double taskingHysteresisInterval;
@property (readonly, nonatomic) double perTeamTaskingHysteresisInterval;

+ (id)_seedParameters;
+ (id)defaultDeviceParameters;
+ (id)_internalParameters;
+ (id)_disabledParameters;
+ (id)_customerParameters;
+ (id)parametersForPlatform:(unsigned char)a0 isInternal:(BOOL)a1 isSeed:(BOOL)a2 isCarrier:(BOOL)a3 taskingIsEnabled:(BOOL)a4;

- (id)initWithAcceptConfigCountCap:(unsigned long long)a0 taskingHysteresisInterval:(double)a1;
- (BOOL)isEqual:(id)a0;

@end
