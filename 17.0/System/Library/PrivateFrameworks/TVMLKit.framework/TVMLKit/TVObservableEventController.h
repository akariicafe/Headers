@class NSString, NSMutableDictionary, NSMapTable;

@interface TVObservableEventController : NSObject <TVObservable> {
    NSMutableDictionary *_observerRecords;
    NSMapTable *_eventsByObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0 forEvent:(id)a1;
- (void)dispatchEvent:(id)a0 sender:(id)a1 withUserInfo:(id)a2;
- (void)removeObserver:(id)a0 forEvent:(id)a1;

@end
