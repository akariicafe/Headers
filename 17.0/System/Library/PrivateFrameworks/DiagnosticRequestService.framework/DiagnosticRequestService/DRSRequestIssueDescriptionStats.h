@class NSDictionary, NSString;

@interface DRSRequestIssueDescriptionStats : DRSRequestStats

@property (readonly, nonatomic) NSDictionary *perOutcomeStats;
@property (readonly, nonatomic) NSString *issueDescription;

+ (id)keyName;
+ (Class)childStatsClass;
+ (id)descriptionStringForRequest:(id)a0;

@end
