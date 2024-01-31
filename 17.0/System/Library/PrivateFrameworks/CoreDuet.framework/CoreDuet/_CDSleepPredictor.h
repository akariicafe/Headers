@interface _CDSleepPredictor : NSObject

+ (id)array:(id)a0 filter:(id /* block */)a1;
+ (id)array:(id)a0 map:(id /* block */)a1;
+ (id)array:(id)a0 reduce:(id /* block */)a1 withInitialValue:(id)a2;
+ (id)arrayWithObject:(id)a0 repeated:(unsigned long long)a1;
+ (id)fetchDeviceInUseDateIntervalsFromStore:(id)a0 whichIntersectInterval:(id)a1;
+ (id)fetchFirstEventDateIntervalFromStore:(id)a0 forStream:(id)a1 sortDateAscending:(BOOL)a2 intersectingInterval:(id)a3;
+ (id)findAllSleepPeriodsInDayStarting:(id)a0 FromActivityProbabilities:(id)a1;
+ (id)findSleepPeriodInDayStarting:(id)a0 FromActivityProbabilities:(id)a1;
+ (id)gatherBitmapHistoryFromStore:(id)a0 forPeriod:(id)a1;
+ (id)generateActivityBitmapFor:(id)a0 unlockedIntervals:(id)a1 eventsAvailableInterval:(id)a2;
+ (id)indexSetFromUnionOf:(id)a0;
+ (void)mutableArray:(id)a0 replaceObjectsAtIndexes:(id)a1 withObjectFromBlock:(id /* block */)a2;
+ (id)predicateForInUseVaue;

@end
