@class NSObject, NSMutableDictionary, UIView;
@protocol OS_dispatch_queue;

@interface UIViewAnimationInfo : NSObject

@property (weak) UIView *owningView;
@property (copy, nonatomic) id /* block */ invalidationBlock;
@property (retain, nonatomic) NSMutableDictionary *animatableProperties;
@property (retain, nonatomic) NSMutableDictionary *presentationModifiers;
@property (retain, nonatomic) NSMutableDictionary *modifierGroupRequestHandlers;
@property (retain, nonatomic) NSMutableDictionary *isPartOfHigherOrderProperty;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lockingQueue;

- (id)initWithView:(id)a0;
- (void)performWithLock:(id /* block */)a0;
- (BOOL)_canInvalidate;
- (void)_invalidateIfPossible;
- (void)setAnimatableProperty:(id)a0 forKey:(id)a1;
- (id)presentationModifierForKey:(id)a0;
- (id)modifierGroupRequestHandlerForKey:(id)a0;
- (void)setModifierGroupRequestHandler:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)animatablePropertyForKey:(id)a0 createIfNecessary:(BOOL)a1;
- (id)animatablePropertyKeys;
- (void)setPresentationModifier:(id)a0 forKey:(id)a1;

@end
