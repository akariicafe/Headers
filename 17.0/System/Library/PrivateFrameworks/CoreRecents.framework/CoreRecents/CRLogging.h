@class NSObject;
@protocol OS_os_log;

@interface CRLogging : NSObject

@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) NSObject<OS_os_log> *client;

@end
