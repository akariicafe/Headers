@interface FLItemChangeObserver : NSObject {
    int _notifyToken;
    id /* block */ _itemChangeObserver;
}

+ (id)observerWithChangeHandler:(id /* block */)a0;

- (void)setItemChangeHandler:(id /* block */)a0;
- (void)dealloc;
- (void)timerUpdated;
- (void).cxx_destruct;

@end
