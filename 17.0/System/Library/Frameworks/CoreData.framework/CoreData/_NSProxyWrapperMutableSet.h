@class _NSFaultingMutableSetMutationMethods;

@interface _NSProxyWrapperMutableSet : _NSNotifyingWrapperMutableSet {
    _NSFaultingMutableSetMutationMethods *_mutationMethods;
}

- (void)setSet:(id)a0;
- (void)minusSet:(id)a0;
- (void)intersectSet:(id)a0;
- (void)dealloc;
- (void)unionSet:(id)a0;
- (void)removeAllObjects;
- (void)addObjectsFromArray:(id)a0;
- (void)removeObject:(id)a0;
- (void)addObject:(id)a0;

@end
