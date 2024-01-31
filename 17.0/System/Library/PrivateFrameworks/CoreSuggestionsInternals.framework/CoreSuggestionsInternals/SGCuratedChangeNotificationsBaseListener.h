@class NSMapTable;

@interface SGCuratedChangeNotificationsBaseListener : NSObject {
    NSMapTable *_liveObserversMap;
}

- (id)init;
- (void)dealloc;
- (void)fire;
- (void)startListening;
- (void).cxx_destruct;
- (void)stopListening;
- (void)addObserver:(id /* block */)a0 forObjectLifetime:(id)a1;

@end
