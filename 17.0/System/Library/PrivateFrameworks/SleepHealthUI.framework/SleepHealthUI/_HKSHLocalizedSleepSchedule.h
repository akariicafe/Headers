@class NSAttributedString;

@interface _HKSHLocalizedSleepSchedule : NSObject

@property (readonly, nonatomic) NSAttributedString *localizedBedTime;
@property (readonly, nonatomic) NSAttributedString *localizedWakeTime;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSleepSchedule:(id)a0 calendar:(id)a1 dayStart:(id)a2 timeFont:(id)a3 amPmFont:(id)a4;

@end
