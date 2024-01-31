@class NSDate, NSString, NSObject;
@protocol OS_os_log;

@interface VMUDebugTimer : NSObject {
    NSDate *_programStartTime;
    NSDate *_eventStartTime;
    NSString *_eventMessage;
    NSString *_categoryMessage;
}

@property (readonly) NSObject<OS_os_log> *logHandle;
@property (readonly) unsigned long long signpostID;

+ (id)sharedTimerIfCreated;
+ (id)sharedTimer;

- (id)init;
- (void)stop;
- (void).cxx_destruct;
- (void)endEvent:(const char *)a0;
- (void)startWithCategory:(const char *)a0 message:(const char *)a1;
- (void)startWithMessage:(const char *)a0;

@end
