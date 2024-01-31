@class HDProfile, NSMutableDictionary;

@interface HDQuantitySeriesManager : NSObject {
    NSMutableDictionary *_observerLock_observersByType;
    NSMutableDictionary *_observerLock_synchronousObserversByType;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observerLock;
}

@property (readonly, weak, nonatomic) HDProfile *profile;

- (id)freezeSeries:(id)a0 metadata:(id)a1 endDate:(id)a2 error:(id *)a3;
- (id)init;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1 transaction:(id)a2;
- (BOOL)insertValues:(id)a0 series:(id)a1 error:(id *)a2;
- (id)initWithProfile:(id)a0;
- (void)removeObserver:(id)a0 forType:(id)a1;
- (void)addObserver:(id)a0 forType:(id)a1 queue:(id)a2;
- (void)samplesJournaled:(id)a0 type:(id)a1;
- (void).cxx_destruct;
- (void)samplesAdded:(id)a0 type:(id)a1 anchor:(id)a2 transaction:(id)a3;
- (void)addSynchronousObserver:(id)a0 forType:(id)a1;
- (BOOL)discardSeries:(id)a0 error:(id *)a1;

@end
