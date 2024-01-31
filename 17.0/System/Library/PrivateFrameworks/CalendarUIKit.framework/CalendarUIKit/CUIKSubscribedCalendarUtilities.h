@interface CUIKSubscribedCalendarUtilities : NSObject

+ (BOOL)canHandleURL:(id)a0;
+ (id)checkSubscriptionURL:(id)a0 missingSchemeBlock:(id /* block */)a1 unsupportedSchemeBlock:(id /* block */)a2;
+ (void)checkURLForSpam:(id)a0 completionHandler:(id /* block */)a1 queue:(id)a2;
+ (void)fetchAvailableHolidayCalendarsWithCompletion:(id /* block */)a0 queue:(id)a1;
+ (id)subscriptionURL:(id)a0 usingHTTPS:(BOOL)a1;
+ (void)unsubscribeFromCalendar:(id)a0;
+ (void)unsubscribeFromCalendar:(id)a0 reportAsJunk:(BOOL)a1;
+ (void)reportLocalSubscribedCalendarAsJunkWithoutRemoval:(id)a0;
+ (id)subscriptionURLForCalendar:(id)a0 inStore:(id)a1;

@end
