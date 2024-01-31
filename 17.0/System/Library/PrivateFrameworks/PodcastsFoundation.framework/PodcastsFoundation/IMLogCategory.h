@class NSObject;
@protocol OS_os_log;

@interface IMLogCategory : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *defaultCategory;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *accessibility;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *imageCache;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *player;

@end
