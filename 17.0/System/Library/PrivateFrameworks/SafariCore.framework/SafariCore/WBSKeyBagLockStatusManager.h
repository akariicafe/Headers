@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface WBSKeyBagLockStatusManager : NSObject {
    NSMutableSet *_handlers;
    int _notifyTokenLockStatusChanged;
    int _notifyTokenFirstUnlock;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly, nonatomic) long long keyBagLockStatus;
@property (readonly, nonatomic, getter=isLockedOrAboutToLock) BOOL lockedOrAboutToLock;
@property (readonly, nonatomic, getter=isKeyBagEnabled) BOOL keyBagEnabled;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_descriptionOfKeyBagLockStatus:(long long)a0;
- (void)_startObservingKeyBagLockStatusChanges;
- (void)_stopObservingKeyBagLockStatusChanges;
- (id)addKeyBagLockStatusChangedObserverWithHandler:(id /* block */)a0;
- (void)removeKeyBagLockStatusChangedObserver:(id)a0;

@end
