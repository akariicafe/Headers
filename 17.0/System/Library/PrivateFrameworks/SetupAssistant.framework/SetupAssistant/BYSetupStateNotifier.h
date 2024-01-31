@class NSObject, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface BYSetupStateNotifier : NSObject

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableArray *generalStateNotificationBlocks;
@property (retain, nonatomic) NSMutableDictionary *specificStateNotificationBlocks;
@property (retain, nonatomic) NSMutableArray *exclusiveNotificationBlocks;
@property (retain, nonatomic) NSMutableArray *relaunchStateNotificationBlocks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic) BOOL shouldRelaunchSetup;
@property (nonatomic) int stateNotificationToken;
@property (nonatomic) int shouldRemainAliveNotificationToken;
@property (nonatomic) int exclusiveNotificationToken;

+ (id)sharedNotifier;

- (void)notifyStateChangedTo:(unsigned long long)a0;
- (void)_endObservingState;
- (id)init;
- (void)dealloc;
- (void)_noLongerExclusiveNotificationFired;
- (void)_beginObservingState;
- (unsigned long long)currentState;
- (void)_shouldRemainAliveNotificationFired;
- (void)addObserverWhenSetupIsNoLongerExclusiveWithNotificationBlock:(id /* block */)a0;
- (void)notifySetupShouldRemainAlive;
- (void).cxx_destruct;
- (void)addStateChangeObserver:(id /* block */)a0;
- (void)_stateChangedTo:(unsigned long long)a0;
- (void)addStateCompletionObserver:(id /* block */)a0 forState:(unsigned long long)a1;
- (void)addRelaunchStateChangeObserver:(id /* block */)a0;

@end
