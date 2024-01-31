@class NSObject;
@protocol OS_os_log;

@interface REMLogStore : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *container;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *stagedLightweightCoreDataMigration;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *xpc;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *read;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *write;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *utility;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *search;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *OVERSIZED;

@end
