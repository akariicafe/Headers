@class NSDictionary, NSString;

@interface DRSRequestBuildStats : DRSRequestStats

@property (readonly, nonatomic) NSDictionary *perTeamIDStats;
@property (readonly, nonatomic) NSString *build;

+ (id)keyName;
+ (Class)childStatsClass;
+ (id)descriptionStringForRequest:(id)a0;

@end
