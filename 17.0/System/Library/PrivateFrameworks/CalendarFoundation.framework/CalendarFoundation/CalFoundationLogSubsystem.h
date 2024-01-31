@class NSObject;
@protocol OS_os_log;

@interface CalFoundationLogSubsystem : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *defaultCategory;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *accounts;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *contacts;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *eventTimer;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *junk;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *locations;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *memory;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *messageTrace;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *suggestions;

@end
