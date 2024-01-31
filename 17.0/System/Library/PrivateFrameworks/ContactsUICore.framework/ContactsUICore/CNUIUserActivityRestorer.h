@class CNContactStore, NSString, NSSet, NSObject;
@protocol OS_os_log, CNUIUserActivityRestorerDelegate;

@interface CNUIUserActivityRestorer : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) NSString *activityTypeCreateContactIntent;
@property (readonly, nonatomic) NSString *activityTypeSpotlightQueryContinuation;
@property (readonly, nonatomic) NSString *activityTypeSpotlightSearchableItem;
@property (weak, nonatomic) id<CNUIUserActivityRestorerDelegate> delegate;
@property (readonly, nonatomic) NSSet *restorableActivityTypes;

- (id)initWithContactStore:(id)a0;
- (void).cxx_destruct;
- (BOOL)restoreSpotlightSearchableItem:(id)a0;
- (BOOL)shouldEnableActivityIndicatorWhenRestoringUserActivityWithType:(id)a0;
- (BOOL)restoreCreateContactIntent:(id)a0;
- (BOOL)restoreEditingContact:(id)a0;
- (BOOL)restoreSpotlightQueryContinuation:(id)a0;
- (BOOL)restoreUserActivity:(id)a0;
- (BOOL)restoreViewingContact:(id)a0;
- (BOOL)restoreViewingGroups:(id)a0;
- (BOOL)restoreViewingList:(id)a0;

@end
