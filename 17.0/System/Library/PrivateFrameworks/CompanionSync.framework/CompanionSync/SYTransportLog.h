@class NSString, NSObject;
@protocol OS_os_log;

@interface SYTransportLog : NSObject {
    NSObject<OS_os_log> *_log;
}

@property (copy, nonatomic) NSString *facility;
@property (readonly, nonatomic) NSObject<OS_os_log> *oslog;

+ (id)sharedInstance;

- (void)logMessage:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_createLog;
- (void)_logOSMessage:(const char *)a0 args:(char *)a1 returnAddress:(void *)a2;
- (void)logMessage:(id)a0 args:(char *)a1;

@end
