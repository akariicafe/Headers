@class SBModifierCacheCoordinator, SBChainableModifier;

@interface SBChainableModifierMethodCache : NSObject <NSCopying> {
    SEL *_selectors;
    long long _selectorCount;
    void /* function */ **_imps;
    unsigned long long _genCount;
    struct SBModifierCacheDispatchData { id x0; void /* function */ *x1; } *_dispatchCache;
    void /* function */ *_nextFunc;
}

@property (nonatomic) SBChainableModifier *modifier;
@property (retain, nonatomic) SBModifierCacheCoordinator *cacheCoordinator;
@property (readonly, nonatomic) BOOL hasNonTrampolineIMPs;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithIMPs:(void /* function */ **)a0 selectorList:(id)a1 subsequentMethodCacheFunc:(void /* function */ *)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
