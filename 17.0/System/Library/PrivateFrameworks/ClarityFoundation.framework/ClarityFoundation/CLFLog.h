@class NSObject;
@protocol OS_os_log;

@interface CLFLog : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *commonLog;

@end
