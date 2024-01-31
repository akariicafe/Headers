@class NSObject;
@protocol OS_dispatch_queue;

@interface TDLogger : NSObject {
    NSObject<OS_dispatch_queue> *_loggingQueue;
    int _verbosity;
    int _logMaxVerbosity;
}

@property (nonatomic) int verbosity;

+ (id)logger;
+ (id)defaultLogger;

- (id)init;
- (void)dealloc;
- (void)logInfo:(id)a0;
- (void)logError:(id)a0;
- (BOOL)isVerbosityLogWarningsAndErrors;
- (BOOL)isVerbosityLogErrorsOnly;
- (BOOL)isVerbosityLogEverything;
- (void)logErrorWithFormat:(id)a0;
- (void)logExtra:(id)a0;
- (void)logExtraWithFormat:(id)a0;
- (void)logInfoWithFormat:(id)a0;
- (void)logMessage:(id)a0 whenVerbosity:(int)a1;
- (void)logWarning:(id)a0;
- (void)logWarningWithFormat:(id)a0;
- (void)waitForLoggingToComplete;

@end
