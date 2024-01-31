@class HDSPWakeUpResultsNotification, HKHealthStore;

@interface HDSPWakeUpResultsNotificationLocalizer : NSObject

@property (readonly, nonatomic) HDSPWakeUpResultsNotification *notification;
@property (readonly, nonatomic) HKHealthStore *healthStore;

- (id)localizedTitle;
- (unsigned long long)category;
- (void).cxx_destruct;
- (id)localizedBody;
- (id)userFirstName;
- (id)_embeddedNameLocalizedStringKey;
- (id)_embeddedNameSubstitutionStringKey;
- (id)_localizedBodyForOneDayNotificationWithError:(id *)a0;
- (id)_localizedBodyForOneWeekDayNotificationWithError:(id *)a0;
- (id)_localizedBodyForTwoWeekNotificationWithError:(id *)a0;
- (id)_localizedStringKeyBase;
- (id)_regularLocalizedStringKey;
- (id)_regularSubstitutionStringKey;
- (double)dailySleepDurationGoal;
- (id)initWithNotification:(id)a0 healthStore:(id)a1;
- (long long)notificationVariant;
- (long long)weeklyGoalAchieved;

@end
