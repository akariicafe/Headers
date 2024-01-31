@class NSObject;
@protocol OS_os_log;

@interface STBlockingUILog : NSObject

@property (class, readonly) NSObject<OS_os_log> *log;

@end
