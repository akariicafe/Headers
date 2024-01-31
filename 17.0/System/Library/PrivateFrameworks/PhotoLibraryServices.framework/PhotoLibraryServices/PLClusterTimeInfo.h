@class NSCalendar, NSDate;

@interface PLClusterTimeInfo : NSObject

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) double endOfSameDayTimestamp;
@property (readonly, nonatomic) double maximumNextDayTimestamp;
@property (readonly, retain, nonatomic) NSDate *latestUTCDate;

- (void)reset;
- (BOOL)utcDateBelongsInCluster:(id)a0;
- (void)updateWithUTCDate:(id)a0 localDate:(id)a1;
- (id)initWithCalendar:(id)a0;
- (void).cxx_destruct;
- (void)_updateTimestampsWithUTCDate:(id)a0 localDate:(id)a1;

@end
