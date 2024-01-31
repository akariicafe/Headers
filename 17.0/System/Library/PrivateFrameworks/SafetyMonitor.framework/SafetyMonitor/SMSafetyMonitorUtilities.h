@class NSString;

@interface SMSafetyMonitorUtilities : NSObject

@property (class, readonly, nonatomic) NSString *magnetBreakNotificationTitle;
@property (class, readonly, nonatomic) NSString *magnetBreakNotificationMessage;

+ (BOOL)isLockdownModeEnabled;
+ (id)carPlayNotificationTypeToString:(unsigned long long)a0;
+ (id)getCarPlayButtonActionIdentifierForNotificationType:(unsigned long long)a0 sessionType:(unsigned long long)a1 error:(id *)a2;
+ (id)getCarPlayButtonTitleForNotificationType:(unsigned long long)a0 sessionType:(unsigned long long)a1 error:(id *)a2;
+ (id)getCarPlayNotificationCategoryForNotificationType:(unsigned long long)a0 sessionType:(unsigned long long)a1 error:(id *)a2;
+ (id)getCarPlayNotificationMessageForNotificationType:(unsigned long long)a0 sessionType:(unsigned long long)a1 contactName:(id)a2 cacheReleaseDate:(id)a3 error:(id *)a4;
+ (id)getCarPlayNotificationTitleForNotificationType:(unsigned long long)a0 sessionType:(unsigned long long)a1 contactName:(id)a2 error:(id *)a3;
+ (id)getSuggestionBodyWithPlaceInference:(id)a0;
+ (id)getSuggestionFooter;
+ (id)getSuggestionTitleWithContactName:(id)a0;
+ (id)safeArrivalMessageWithCustomizedSummaryForDestination:(id)a0;

@end
