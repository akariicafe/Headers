@class NSDictionary;

@interface DRSRequestAllStats : DRSRequestStats

@property (readonly, nonatomic) NSDictionary *perBuildStats;

+ (id)keyName;
+ (Class)childStatsClass;
+ (id)descriptionStringForRequest:(id)a0;
+ (id)statsForRequests:(id)a0;

- (id)init;
- (unsigned long long)generateCoreAnalyticsEvents:(BOOL)a0;
- (id)terminalRequestProtobufRepresentation;

@end
