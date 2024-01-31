@class CalDateRange, NSMutableArray, NSDate;

@interface CADStatsOccurrences : CADStatCollector {
    NSMutableArray *_occurrenceInfos;
    NSDate *_now;
    CalDateRange *_desiredOccurrenceRange;
}

+ (id)eventName;

- (id)eventDictionaries;
- (void).cxx_destruct;
- (id)desiredOccurrenceRange;
- (void)prepareWithContext:(id)a0;
- (void)processOccurrences:(id)a0;
- (BOOL)wantsOccurrences;

@end
