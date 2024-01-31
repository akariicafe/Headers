@class NSArray;

@interface SBSAElementLayoutTransition : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *initialElementContexts;
@property (readonly, copy, nonatomic) NSArray *targetElementContexts;
@property (readonly, nonatomic, getter=isLayoutChange) BOOL layoutChange;
@property (readonly, nonatomic, getter=isCollisionRequired) BOOL collisionRequired;
@property (readonly, nonatomic, getter=isSingleElementExpansion) BOOL singleElementExpansion;
@property (readonly, nonatomic, getter=isTransitionFromCustom) BOOL transitionFromCustom;
@property (readonly, nonatomic, getter=isTransitionToSingleCompact) BOOL transitionToSingleCompact;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)elementWithIdentityWasOrIsSensorAttached:(id)a0;
- (id)initWithInitialElementContexts:(id)a0 targetElementContext:(id)a1;

@end
