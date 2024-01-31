@class NSMutableDictionary, NSMutableOrderedSet;
@protocol SBHMultiplexingManagerDelegate;

@interface SBHMultiplexingManager : NSObject

@property (weak, nonatomic) id<SBHMultiplexingManagerDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *viewControllersForIdentifier;
@property (retain, nonatomic) NSMutableDictionary *multiplexingViewControllersForIdentifier;
@property (retain, nonatomic) NSMutableDictionary *cachedRecentViewControllersForIdentifier;
@property (retain, nonatomic) NSMutableOrderedSet *cachedRecentViewControllerIdentifiers;
@property (nonatomic) unsigned long long cachedRecentViewControllerCountLimit;

- (id)newMultiplexingViewControllerForIdentifier:(id)a0 atLevel:(double)a1;
- (void)enumerateAllViewControllersUsingBlock:(id /* block */)a0;
- (id)succinctDescriptionBuilder;
- (void)_trimCachedRecentViewControllers;
- (id)viewControllerForIdentifier:(id)a0;
- (void)setViewController:(id)a0 forIdentifier:(id)a1;
- (BOOL)hasViewControllerForIdentifier:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)validateActiveMultiplexingViewControllerForIdentifier:(id)a0;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (BOOL)_cacheLastDiscardedViewController:(id)a0 forIdentifier:(id)a1;
- (id)initWithDelegate:(id)a0;
- (id)succinctDescription;
- (void)discardMultiplexingViewController:(id)a0;
- (id)activeMultiplexingViewControllerForViewController:(id)a0;
- (id)activeMultiplexingViewControllerForIdentifier:(id)a0;
- (void)_modifyViewControllersForIdentifier:(id)a0 reusingCacheViewControllersIfNecessary:(BOOL)a1 withBlock:(id /* block */)a2;
- (void)discardCachedRecentViewControllersForIdentifier:(id)a0;
- (void)discardCachedRecentViewControllers;
- (id)_activeMultiplexingViewControllerForIdentifier:(id)a0;

@end
