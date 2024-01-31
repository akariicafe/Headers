@class HKStateOfMind, NSCalendar, NSMutableArray;

@interface HDMHDaySummaryBuilder : NSObject {
    NSMutableArray *_momentaryStatesOfMind;
    HKStateOfMind *_lastDailyStateOfMind;
}

@property (readonly, nonatomic) long long dayIndex;
@property (readonly, nonatomic) NSCalendar *gregorianCalendar;

- (void).cxx_destruct;
- (id)daySummary;
- (void)addStateOfMind:(id)a0;
- (id)initWithDayIndex:(long long)a0 gregorianCalendar:(id)a1;

@end
