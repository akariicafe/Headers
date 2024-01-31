@interface ICUserNotificationContext : NSObject

@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) struct __CFRunLoopSource { } *runLoopSourceRef;

- (void).cxx_destruct;
- (void)clearRunLoop;

@end
