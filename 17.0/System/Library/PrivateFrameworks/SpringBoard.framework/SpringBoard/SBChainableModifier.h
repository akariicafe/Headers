@class NSString, SBChainableModifierMethodCache, SBModifierCacheCoordinator;
@protocol SBChainableModifierDelegate;

@interface SBChainableModifier : NSObject <BSDescriptionProviding, SBChainableModifierQuery, SBChainableModifierContext, NSCopying> {
    BOOL _hasNotifiedChildrenDidMoveToParent;
    SBChainableModifierMethodCache *_queryCache;
    SBChainableModifierMethodCache *_contextCache;
}

@property (nonatomic) SBChainableModifier *parentModifier;
@property (nonatomic) SBChainableModifier *previousContextModifier;
@property (retain, nonatomic) SBChainableModifier *nextQueryModifier;
@property (retain, nonatomic) SBModifierCacheCoordinator *queryCacheCoordinator;
@property (retain, nonatomic) SBModifierCacheCoordinator *contextCacheCoordinator;
@property (nonatomic) long long state;
@property (nonatomic) long long modifierLevel;
@property (copy, nonatomic) NSString *key;
@property (weak, nonatomic) id<SBChainableModifierDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)contextProtocol;
+ (id)newContextCache;
+ (void)_initalizeIMPCaching;
+ (id)baseClassForQueryProtocol;
+ (id)contextSelectors;
+ (Class)makeDynamicSubclassWithDescriptor:(id)a0 implementation:(id)a1 forSelector:(SEL)a2 ofProtocol:(id)a3;
+ (BOOL)modifierUnderTest:(id)a0 containsChildModifierKindOfClass:(Class)a1;
+ (id)newCacheWithSelectorList:(id)a0 subsequentMethodCacheFunc:(void /* function */ *)a1 cachingDictionary:(id)a2;
+ (id)newEventResponse;
+ (id)newQueryCache;
+ (id)queryProtocol;
+ (id)querySelectors;
+ (void)verifyModifierImplements:(BOOL)a0 methodsOfProtocol:(id)a1;

- (void)didMoveToParentModifier:(id)a0;
- (id)init;
- (id)_handleEvent:(id)a0;
- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)loggingCategory;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)handleEvent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_addChildModifier:(id)a0 atLevel:(long long)a1 key:(id)a2 queryResponse:(unsigned long long)a3 contextResponse:(unsigned long long)a4;
- (BOOL)_anyDescendentImplementsAnyContextMethod;
- (BOOL)_anyDescendentImplementsAnyQueryMethod;
- (id)_forwardEvent:(id)a0 toChildModifier:(id)a1;
- (void)_insertModifier:(id)a0 afterModifier:(id)a1 queryResponse:(unsigned long long)a2 contextResponse:(unsigned long long)a3;
- (id)_lastDeepChildModifier;
- (void)_notifyChildrenDidMoveToParentIfNeeded;
- (void)_removeChildModifier:(id)a0 queryResponse:(unsigned long long)a1 contextResponse:(unsigned long long)a2;
- (void)addChildModifier:(id)a0;
- (void)addChildModifier:(id)a0 atLevel:(long long)a1 key:(id)a2;
- (id)childModifierByKey:(id)a0;
- (unsigned long long)childModifierCount;
- (BOOL)completesWhenChildrenComplete;
- (BOOL)containsChildModifier:(id)a0;
- (id)debugPotentialChildModifiers;
- (void)enumerateChildModifiersWithBlock:(id /* block */)a0;
- (void)performTransactionWithTemporaryChildModifier:(id)a0 usingBlock:(id /* block */)a1;
- (void)provideNextQueryImplementation:(id)a0 forSelector:(SEL)a1;
- (void)providePreviousContextImplementation:(id)a0 forSelector:(SEL)a1;
- (void)removeChildModifier:(id)a0;
- (id)responseForProposedChildResponse:(id)a0 childModifier:(id)a1 event:(id)a2;
- (BOOL)runsInternalVerificationAfterEventDispatch;
- (void)verifyInternalIntegrityAfterHandlingEvent:(id)a0;

@end
