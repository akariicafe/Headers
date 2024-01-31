@class NSArray, UIDynamicAnimator, NSMutableArray;

@interface UIDynamicBehavior : NSObject {
    UIDynamicAnimator *_context;
    NSMutableArray *_items;
    NSMutableArray *_behaviors;
    NSMutableArray *_addedBehaviors;
}

@property (readonly, copy, nonatomic) NSArray *childBehaviors;
@property (copy, nonatomic) id /* block */ action;
@property (readonly, nonatomic) UIDynamicAnimator *dynamicAnimator;

+ (void)initialize;
+ (BOOL)_isPrimitiveBehavior;

- (void)_setItems:(id)a0;
- (id)init;
- (void)_step;
- (id)_context;
- (id)items;
- (id)_items;
- (id)description;
- (void).cxx_destruct;
- (void)_setContext:(id)a0;
- (void)_addItem:(id)a0;
- (void)_associate;
- (void)_changedParameterForBody:(id)a0;
- (void)_detachAutolayoutFromItemIfNecessary:(id)a0;
- (void)_dissociate;
- (id)_itemsDescription;
- (void)_reattachAutolayoutToItemIfNecessary:(id)a0;
- (void)_reevaluate:(unsigned long long)a0;
- (void)_removeItem:(id)a0;
- (void)_updateAutolayoutEngagementForItemIfNecessary:(id)a0 detach:(BOOL)a1;
- (void)addChildBehavior:(id)a0;
- (BOOL)allowsAnimatorToStop;
- (void)removeChildBehavior:(id)a0;
- (void)willMoveToAnimator:(id)a0;

@end
