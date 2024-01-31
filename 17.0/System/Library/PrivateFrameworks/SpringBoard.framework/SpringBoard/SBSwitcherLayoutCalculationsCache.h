@class NSDictionary, SBSwitcherLayoutCalculationsCacheValidityToken;
@protocol SBSwitcherLayoutCalculationsCacheDelegate;

@interface SBSwitcherLayoutCalculationsCache : NSObject {
    NSDictionary *_cachedLayoutCalculationsByKey;
}

@property (weak, nonatomic) id<SBSwitcherLayoutCalculationsCacheDelegate> delegate;
@property (readonly, nonatomic) SBSwitcherLayoutCalculationsCacheValidityToken *validityToken;

- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForKey:(id)a0 validityToken:(id)a1 fallback:(id /* block */)a2;
- (void)rebuildIfNecessaryForValidityToken:(id)a0;
- (double)scaleForKey:(id)a0 validityToken:(id)a1 fallback:(id /* block */)a2;

@end
