@class NSArray;

@interface COBrowserObserverSet : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSArray *observers;

- (id)init;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (void)informObserverAboutDevice:(id)a0 added:(BOOL)a1;

@end
