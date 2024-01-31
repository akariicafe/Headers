@class NSString, NSArray, NSMutableArray;

@interface NWAccumulator : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _kvo_lock;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *accumulatedValues;
@property (readonly, nonatomic) NSArray *accumulations;
@property (retain, nonatomic) NWAccumulator *lastSnapshot;

- (void)reset;
- (void)dealloc;
- (id)snapshot;
- (void)addAccumulation:(id)a0 withName:(id)a1 forKey:(id)a2 stateCallback:(id /* block */)a3;
- (id)initWithName:(id)a0;
- (id)description;
- (id)accumulatedValueForObject:(id)a0 andKeyPath:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)registerObserverForKeyPath:(id)a0 ofObject:(id)a1 alreadyRegistered:(BOOL)a2;
- (void)addAccumulation:(id)a0 forKey:(id)a1 stateCallback:(id /* block */)a2;

@end
