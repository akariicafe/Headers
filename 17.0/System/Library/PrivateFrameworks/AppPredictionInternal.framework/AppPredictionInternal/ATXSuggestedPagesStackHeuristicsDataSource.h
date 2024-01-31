@interface ATXSuggestedPagesStackHeuristicsDataSource : NSObject <ATXSuggestedPagesWidgetDataSource>

- (BOOL)_hasTVInterest;
- (id)_widgetsForMindfulnessMode;
- (id)_widgetsForExerciseMode;
- (id)provideWidgetsForPageType:(long long)a0 environment:(id)a1;
- (id)_widgetsForGamingMode;
- (id)_widgetsForPersonalMode;
- (BOOL)_hasAlarmActivity;
- (id)_widgetsForDrivingMode;
- (id)_widgetsForWorkMode;
- (BOOL)_hasSignificantHomeAccessoryEvents;
- (id)_widgetsForSleepMode;
- (id)_widgetsForReadingMode;

@end
