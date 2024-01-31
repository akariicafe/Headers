@class NSArray, NSNumber, NSDate;

@interface UARPDeploymentRuleConfig : NSObject

@property (copy) NSDate *goLiveDate;
@property (copy) NSArray *countryList;
@property (copy) NSNumber *rampPeriod;
@property (copy) NSNumber *deploymentLimit;

- (void).cxx_destruct;

@end
