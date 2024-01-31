@class NSTimeZone;

@interface _NSCalendarBridge : NSCalendar

@property (copy) NSTimeZone *timeZone;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)initWithCalendarIdentifier:(id)a0;
- (id)_componentsInTimeZone:(id)a0 fromDate:(id)a1;
- (id)_components:(unsigned long long)a0 fromDate:(id)a1;
- (id)_dateFromComponents:(id)a0;
- (void)_enumerateDatesStartingAfterDate:(id)a0 matchingComponents:(id)a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (id)components:(unsigned long long)a0 fromDate:(id)a1;
- (id)componentsInTimeZone:(id)a0 fromDate:(id)a1;
- (id)dateFromComponents:(id)a0;
- (void)enumerateDatesStartingAfterDate:(id)a0 matchingComponents:(id)a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (id)initWithCheckedCalendarIdentifier:(id)a0;

@end
