@class NSArray;

@interface BLSHFlipbookFramesHistogram : NSObject

@property (readonly, nonatomic) unsigned long long totalCount;
@property (readonly, nonatomic) double averagePresentationTimeFromNow;
@property (readonly, nonatomic) double medianPresentationTimeFromNow;
@property (readonly, nonatomic) NSArray *presentationTimeHistogram;
@property (readonly, nonatomic) unsigned int countLessThan1Min;
@property (readonly, nonatomic) unsigned int count1to2Min;
@property (readonly, nonatomic) unsigned int count2to3Min;
@property (readonly, nonatomic) unsigned int count3to4Min;
@property (readonly, nonatomic) unsigned int count4to5Min;
@property (readonly, nonatomic) unsigned int count5to6Min;
@property (readonly, nonatomic) unsigned int countMoreThan6Min;
@property (readonly, nonatomic) double intervalUntilFirstFrame;
@property (readonly, nonatomic) double presentationDuration;
@property (readonly, nonatomic) unsigned long long memoryUsage;
@property (readonly, nonatomic) unsigned long long averageMemoryUsage;
@property (readonly, nonatomic) unsigned long long medianMemoryUsage;
@property (readonly, nonatomic) NSArray *memoryUsageHistogram;
@property (readonly, nonatomic) float lowestAPL;
@property (readonly, nonatomic) float averageAPL;
@property (readonly, nonatomic) float medianAPL;
@property (readonly, nonatomic) float highestAPL;
@property (readonly, nonatomic) float lowestAPLDimming;
@property (readonly, nonatomic) float averageAPLDimming;
@property (readonly, nonatomic) float medianAPLDimming;
@property (readonly, nonatomic) float highestAPLDimming;

+ (id)histogramWithReferenceDate:(id)a0 flipbookFrames:(id)a1;
+ (id)histogramWithReferenceDate:(id)a0 iteratePresentationDatesBlock:(id /* block */)a1;

- (id)description;
- (void).cxx_destruct;

@end
