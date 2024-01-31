@interface PGOverTheYearsMemoryConfiguration : PGOverTimeMemoryConfiguration

@property (nonatomic) unsigned long long minimumNumberOfYears;
@property (nonatomic) BOOL allowTwoConsecutiveYears;
@property (nonatomic) unsigned long long minimumNumberOfMomentsForTwoConsecutiveYears;

+ (id)defaultFallbackOverTheYearsMemoryConfiguration;
+ (id)defaultOverTheYearsMemoryConfiguration;
+ (id)strictDefaultOverTheYearsMemoryConfiguration;

@end
