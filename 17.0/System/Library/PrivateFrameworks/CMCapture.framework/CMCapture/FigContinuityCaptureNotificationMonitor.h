@interface FigContinuityCaptureNotificationMonitor : NSObject

+ (id)sharedInstance;
+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)_handleContinuityCaptureNotification:(id)a0;

@end
