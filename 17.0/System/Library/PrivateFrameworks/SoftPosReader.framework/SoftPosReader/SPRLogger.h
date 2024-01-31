@class NSString, NSObject;
@protocol OS_os_log;

@interface SPRLogger : NSObject

@property (class, readonly, copy) NSString *subsystem;
@property (class, readonly) NSObject<OS_os_log> *pinCrypto;
@property (class, readonly) NSObject<OS_os_log> *xpcClient;

@end
