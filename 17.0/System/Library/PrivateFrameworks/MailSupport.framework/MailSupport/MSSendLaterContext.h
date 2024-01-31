@interface MSSendLaterContext : NSObject

+ (unsigned long long)contextForCurrentDate;
+ (BOOL)shouldShowSendLaterDisclaimerAlertForContext:(unsigned long long)a0;
+ (id)titleAndDateForSendLaterContext:(unsigned long long)a0;
+ (id)_configuredTitleForFormat:(id)a0 date:(id)a1;
+ (unsigned long long)contextForDate:(id)a0;
+ (id)_nextMondayMorning;

@end
