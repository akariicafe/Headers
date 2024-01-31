@class NSObject;
@protocol OS_os_log;

@interface PGLogging : NSObject

@property (readonly) NSObject<OS_os_log> *loggingConnection;

+ (id)sharedLogging;
+ (id)memoriesMusicLogging;

- (void).cxx_destruct;

@end
