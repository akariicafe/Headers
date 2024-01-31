@class NSMutableDictionary, NSString, CSCachingVibrancyTransitionProvider, PREditingLook;

@interface PREditorTitleViewControllerCoordinator : NSObject

@property (retain, nonatomic) NSMutableDictionary *titleViewControllersForLook;
@property (retain, nonatomic) CSCachingVibrancyTransitionProvider *cachingProvider;
@property (retain, nonatomic) PREditingLook *transitionInProgressLook;
@property (readonly, nonatomic) NSString *role;

+ (Class)titleViewControllerClassForRole:(id)a0;

- (void)reloadData;
- (void).cxx_destruct;
- (id)cachingVibrancyProviderForLook:(id)a0;
- (void)invalidateInteractiveTransition;
- (id)beginInteractiveTransitionForStartingLook:(id)a0 toBaseFont:(id)a1 vibrancyConfiguration:(id)a2;
- (void)enumerateTimeViewControllersUsingBlock:(id /* block */)a0;
- (id)initWithRole:(id)a0;
- (void)prepareInteractiveTransitionForStartingLook:(id)a0;
- (id)titleViewControllerForLook:(id)a0;
- (void)updateLookWithIdentifier:(id)a0 withLook:(id)a1;

@end
