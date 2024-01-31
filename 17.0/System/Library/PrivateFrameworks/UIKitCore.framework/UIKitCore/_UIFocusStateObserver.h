@class NSMapTable;

@interface _UIFocusStateObserver : NSObject {
    NSMapTable *_observers;
    struct { unsigned char wasActive : 1; unsigned char supressNotifyObservers : 1; } _flags;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;

- (id)init;
- (void)removeObserver:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)addObserver:(id /* block */)a0;
- (id)descriptionBuilder;
- (void)notifyObserversIfNecessary;
- (void)performUpdatesAndNotifyObservers:(id /* block */)a0;

@end
