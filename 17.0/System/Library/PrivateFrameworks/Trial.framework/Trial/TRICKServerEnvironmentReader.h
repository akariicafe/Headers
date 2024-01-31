@interface TRICKServerEnvironmentReader : NSObject

+ (long long)currentEnvironment;
+ (int)currentPopulation;
+ (int)validatedPopulationFromNumber:(long long)a0;
+ (long long)validatedEnvironmentFromNumber:(id)a0;

@end
