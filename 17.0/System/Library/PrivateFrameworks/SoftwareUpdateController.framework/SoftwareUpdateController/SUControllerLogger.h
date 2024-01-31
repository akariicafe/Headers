@class NSObject;
@protocol OS_os_log;

@interface SUControllerLogger : NSObject {
    NSObject<OS_os_log> *_logInfo;
    NSObject<OS_os_log> *_logNotice;
    NSObject<OS_os_log> *_logError;
}

@property (nonatomic) long long logLevel;

+ (id)sharedLogger;

- (id)init;
- (void).cxx_destruct;
- (void)logAtLevel:(long long)a0 label:(const char *)a1 format:(id)a2;
- (void)setLoglevel:(long long)a0;

@end
