@class NSString, NSMutableArray, NSMutableDictionary;

@interface NWNumericAccumulator : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _kvo_lock;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *kvoWatchers;
@property (retain, nonatomic) NSMutableArray *overriddenStates;
@property (retain, nonatomic) NSMutableDictionary *accumulations;

- (void)reset;
- (void)dealloc;
- (void)addAccumulation:(id)a0 withName:(id)a1 forKey:(id)a2 stateCallback:(id /* block */)a3;
- (id)initWithName:(id)a0;
- (id)description;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)registerObserverForKeyPath:(id)a0 ofObject:(id)a1 alreadyRegistered:(BOOL)a2;
- (void)addAccumulation:(id)a0 forKey:(id)a1 stateCallback:(id /* block */)a2;
- (void)addCount:(id)a0 toAccumulation:(id)a1;
- (id)aggregatedStates;
- (id)overrideStateWithName:(id)a0;
- (void)updateState:(id)a0 forName:(id)a1;
- (id)watcherForObject:(id)a0 andKeyPath:(id)a1;

@end
