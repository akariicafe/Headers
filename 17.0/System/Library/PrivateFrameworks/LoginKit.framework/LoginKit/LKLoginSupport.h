@class NSOperationQueue;

@interface LKLoginSupport : NSObject

@property (retain, nonatomic) NSOperationQueue *listenerQueue;
@property (retain, nonatomic) NSOperationQueue *completionQueue;

+ (id)findLeastRecentlyUsedCleanUser;
+ (BOOL)hasCleanUser;
+ (BOOL)isNewUserAbleToLogin;

- (id)init;
- (void).cxx_destruct;
- (id)_errorForNotificationType:(unsigned long long)a0;
- (id)_notificationForNotificationType:(unsigned long long)a0;
- (void)_runWhenDarwinNotificationPosted:(unsigned long long)a0 timeOutPeriod:(double)a1 block:(id /* block */)a2;
- (void)_runWithTimeOutPeriod:(double)a0 notificationType:(unsigned long long)a1 completionBlock:(id /* block */)a2;
- (void)_timeOutAfterTimePeriod:(double)a0 withError:(id)a1 block:(id /* block */)a2;
- (void)runWithTimeOutPeriod:(double)a0 loggedInBlock:(id /* block */)a1;
- (void)runWithTimeOutPeriod:(double)a0 readyToLoginBlock:(id /* block */)a1;

@end
