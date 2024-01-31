@class NSObject;
@protocol OS_os_log;

@interface _LABKLog : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

+ (void)logClass:(Class)a0 selector:(SEL)a1 message:(id)a2;

@end
