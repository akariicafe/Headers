@class NSMapTable, NSObject;
@protocol OS_dispatch_queue, IRBiomeProviderInterface;

@interface IRBiomeProvider : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMapTable *eventTypeToObservers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) id<IRBiomeProviderInterface> biomeInterface;

- (id)init;
- (void)unsubscribe:(long long)a0;
- (void)subscribe:(long long)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0 forEvent:(long long)a1;
- (void)removeObserver:(id)a0 forEvent:(long long)a1;
- (id)createStandardBiomeInterface;
- (id)fetchLatestEventsOfEventType:(long long)a0 numEvents:(unsigned long long)a1;
- (void)notifyObserversOfEvent:(long long)a0 withValue:(id)a1;

@end
