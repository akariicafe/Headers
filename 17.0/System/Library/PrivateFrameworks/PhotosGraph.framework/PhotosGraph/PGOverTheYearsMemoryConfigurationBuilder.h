@interface PGOverTheYearsMemoryConfigurationBuilder : PGOverTimeMemoryConfigurationBuilder

@property (readonly, nonatomic) unsigned long long minimumNumberOfYears;
@property (readonly, nonatomic) BOOL allowTwoConsecutiveYears;
@property (readonly, nonatomic) unsigned long long minimumNumberOfMomentsForTwoConsecutiveYears;

- (id)overTheYearsMemoryConfiguration;

@end
