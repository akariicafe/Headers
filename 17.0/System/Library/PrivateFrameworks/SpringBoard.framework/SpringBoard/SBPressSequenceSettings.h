@interface SBPressSequenceSettings : NSObject

@property (nonatomic) unsigned long long numberOfPresses;
@property (nonatomic) double maxDefaultPressDownDuration;
@property (nonatomic) double maxDefaultPressUpDuration;
@property (nonatomic) double maxDownToDownDuration;
@property (nonatomic) unsigned long long indexOfPressDownToUseForVarianceAndGrowth;
@property (nonatomic) unsigned long long numberOfPressDownGrowthTerms;
@property (nonatomic) unsigned long long indexOfPressUpToUseForVarianceAndGrowth;
@property (nonatomic) unsigned long long numberOfPressUpGrowthTerms;
@property (nonatomic) double pressDownVariance;
@property (nonatomic) double pressUpVariance;

@end
