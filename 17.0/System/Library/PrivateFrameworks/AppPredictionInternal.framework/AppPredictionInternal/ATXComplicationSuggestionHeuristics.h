@class ATXBluetoothDuetDataProvider, _ATXDuetHelper;

@interface ATXComplicationSuggestionHeuristics : NSObject {
    ATXBluetoothDuetDataProvider *_bluetoothDataProvider;
    _ATXDuetHelper *_duetHelper;
}

+ (unsigned long long)getClimateCountGivenHomeCounts:(id)a0;
+ (id)_countedHomeAccessoryEvents;
+ (unsigned long long)_fetchNumberOfCalendarEventsForStartDate:(id)a0 endDate:(id)a1;
+ (unsigned long long)_numCalendarEventsOverLastAndNextWeek;
+ (unsigned long long)_numRemindersOverLastWeek;
+ (unsigned long long)getLightCountGivenHomeCounts:(id)a0;
+ (unsigned long long)getSecurityCountGivenHomeCounts:(id)a0;
+ (unsigned long long)numberOfRemindersSinceDate:(id)a0;
+ (long long)scoreFromConfidence:(unsigned char)a0;

- (id)init;
- (unsigned char)_calendarHeuristic;
- (unsigned char)_batteryHeuristic;
- (id)_homeHeuristics;
- (unsigned long long)_numBluetoothConnectionsOverLastWeek;
- (id)description;
- (BOOL)_confidenceIsValidForPrediction:(unsigned char)a0;
- (void).cxx_destruct;
- (id)complicationHeuristicsDictionary;
- (unsigned char)_reminderHeuristic;

@end
