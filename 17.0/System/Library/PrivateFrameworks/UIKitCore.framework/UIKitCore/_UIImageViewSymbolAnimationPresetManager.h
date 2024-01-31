@class _UIImageViewPendingSymbolContentTransition, NSMutableArray, NSSymbolContentTransition;
@protocol _UIImageViewSymbolAnimationPresetClient;

@interface _UIImageViewSymbolAnimationPresetManager : NSObject {
    NSMutableArray *_activeSymbolEffects;
    NSMutableArray *_pendingSymbolEffects;
    NSSymbolContentTransition *_activeSymbolContentTransition;
    _UIImageViewPendingSymbolContentTransition *_pendingSymbolContentTransition;
}

@property (weak, nonatomic) id<_UIImageViewSymbolAnimationPresetClient> client;

+ (id)managerForClient:(id)a0;

- (id)init;
- (void)removeAllSymbolEffectsWithOptions:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)_activateActiveSymbolEffectEntry:(id)a0;
- (void)_removeSymbolEffectsOfType:(id)a0 options:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3 forAddingNewEffect:(BOOL)a4;
- (BOOL)_symbolEffect:(id)a0 collidesWithSymbolEffect:(id)a1 forAddingEffect:(BOOL)a2;
- (void)activatePendingSymbolContentTransition:(id)a0;
- (void)activatePendingSymbolEffects;
- (void)activeSymbolContentTransitionDidComplete:(id)a0;
- (void)activeSymbolEffectDidComplete:(id)a0;
- (void)addActiveSymbolEffect:(id)a0 options:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)addPendingSymbolContentTransition:(id)a0 fromSymbolImage:(id)a1 toSymbolImage:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (void)addPendingSymbolEffect:(id)a0 options:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)discardPendingSymbolContentTransitions;
- (BOOL)hasPendingAnimationsForImage:(id)a0;
- (id)pendingSymbolContentTransitionForSettingSymbolImage:(id)a0;
- (void)removeSymbolEffectsOfType:(id)a0 options:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;

@end
