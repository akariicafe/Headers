@class BPSSink, NSNotificationCenter, NSCache;

@interface SearchUIDowntimeManager : NSObject

@property (retain) BPSSink *biomeSink;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly) NSCache *downtimeStatuses;

+ (id)sharedManager;
+ (id)familyMemberForContact:(id)a0 isMe:(BOOL)a1;
+ (BOOL)isChildOrTeenFamilyMember:(id)a0;
+ (BOOL)screenTimeIsEnabledForContact:(id)a0;
+ (id)screenTimeUserIDForContact:(id)a0;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (int)statusForSTUserID:(id)a0 forceRecheck:(BOOL)a1;
- (id)addObserverForDowntimeStatuses:(id /* block */)a0;
- (void)setupSink;
- (void)updateWithChildState:(id)a0;

@end
