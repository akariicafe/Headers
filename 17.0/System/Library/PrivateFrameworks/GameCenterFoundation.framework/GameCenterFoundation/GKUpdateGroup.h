@class NSObject, NSString, NSError, NSLock, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface GKUpdateGroup : NSObject {
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSObject<OS_dispatch_group> *_dispatchGroup;
}

@property (retain) NSLock *lock;
@property (retain, nonatomic) NSMutableArray *notifiers;
@property (retain) NSError *error;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) long long updateCount;

+ (id)updateGroup;
+ (id)updateGroupForTargetQueue:(id)a0;
+ (id)updateGroupWithName:(id)a0;
+ (id)updateGroupWithName:(id)a0 taregetQueue:(id)a1;

- (void)wait;
- (void)perform:(id /* block */)a0;
- (void)dealloc;
- (void)join:(id /* block */)a0;
- (void)applyUpdates;
- (void)performOnQueue:(id)a0 block:(id /* block */)a1;
- (void)cancelUpdates;
- (id)initWithName:(id)a0 targetQueue:(id)a1;
- (void)joinAndApplyUpdates;
- (void)joinApplyUpdatesAndDo:(id /* block */)a0;

@end
