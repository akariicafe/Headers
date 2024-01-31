@class NSObject;
@protocol OS_os_log;

@interface CUIKLogSubsystem : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *defaultCategory;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *autocomplete;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *continuity;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *dateStrings;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *docktile;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *editingContext;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *eventLoader;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *eventStoreEditor;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *signpost;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *undo;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *userActions;

@end
