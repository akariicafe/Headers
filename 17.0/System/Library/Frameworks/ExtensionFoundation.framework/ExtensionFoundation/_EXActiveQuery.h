@class _EXQuery, NSSet, NSMutableSet, _EXDiscoveryController;

@interface _EXActiveQuery : NSObject

@property (readonly) NSMutableSet *internalObservers;
@property (readonly) NSMutableSet *internalNewObservers;
@property (readonly, weak) _EXDiscoveryController *discoveryController;
@property (retain) NSSet *currentUUIDs;
@property (readonly) NSSet *observers;
@property (readonly) _EXQuery *query;

- (unsigned long long)hash;
- (void)removeObserver:(id)a0;
- (id)initWithQuery:(id)a0 discoveryController:(id)a1;
- (void)update;
- (BOOL)isEqualToActiveQuery:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addObserver:(id)a0;

@end
