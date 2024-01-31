@class NSObject;
@protocol OS_os_log;

@interface EKLogSubsystem : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *defaultCategory;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *autocomplete;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *availabilitySearch;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *exchangeSync;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *junk;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *savingSignposts;

@end
