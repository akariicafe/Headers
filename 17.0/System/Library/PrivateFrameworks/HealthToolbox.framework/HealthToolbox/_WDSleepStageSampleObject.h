@class HKCategorySample, NSString, NSDateInterval;

@interface _WDSleepStageSampleObject : NSObject <WDDataListDataObjectSource>

@property (readonly, nonatomic) HKCategorySample *sample;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
