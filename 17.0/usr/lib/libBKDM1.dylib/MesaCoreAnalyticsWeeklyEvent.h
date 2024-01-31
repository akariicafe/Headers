@class NSNumber, NSMutableArray;

@interface MesaCoreAnalyticsWeeklyEvent : MesaCoreAnalyticsDailyEvent

@property (retain) NSNumber *badDaysCount;
@property (retain) NSNumber *validDaysCount;
@property (readonly) NSMutableArray *dailyEvents;
@property (readonly) NSNumber *dailyEventIndex;

- (void)reset;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentationArchiving:(BOOL)a0;
- (id)initWithName:(id)a0 dictionary:(id)a1;
- (BOOL)postEvent;
- (void)addDailyEvent:(id)a0;
- (void)calculateDailyValues;
- (void)calculateWeeklyValues;

@end
