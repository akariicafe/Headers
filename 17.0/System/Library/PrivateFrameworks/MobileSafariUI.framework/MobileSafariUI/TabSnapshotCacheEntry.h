@class NSUUID, NSMutableSet, UIImage;
@protocol TabSnapshotCacheEntryStateObserving;

@interface TabSnapshotCacheEntry : NSObject

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic, getter=isGroup) BOOL group;
@property (readonly, nonatomic) NSMutableSet *groupMembers;
@property (readonly, nonatomic) BOOL isPendingUpdate;
@property (retain, nonatomic) UIImage *snapshot;
@property (nonatomic) long long state;
@property (nonatomic, getter=isUpdatingState) BOOL updatingState;
@property (nonatomic) BOOL stateUpdateCancelled;
@property (nonatomic) BOOL fitsInCache;
@property (weak, nonatomic) id<TabSnapshotCacheEntryStateObserving> stateObserver;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithIdentifier:(id)a0 isGroup:(BOOL)a1;

@end
