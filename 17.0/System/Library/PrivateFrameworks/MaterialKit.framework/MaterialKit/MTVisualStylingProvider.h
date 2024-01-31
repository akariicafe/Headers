@class NSMapTable, NSMutableDictionary, NSPointerArray, NSString, MTCoreMaterialVisualStylingProvider;

@interface MTVisualStylingProvider : NSObject <MTCoreMaterialVisualStylingProviderObserving>

@property (readonly, nonatomic, getter=_coreMaterialVisualStylingProvider) MTCoreMaterialVisualStylingProvider *coreMaterialVisualStylingProvider;
@property (retain, nonatomic, getter=_coreMaterialVisualStylingProvider) MTCoreMaterialVisualStylingProvider *coreMaterialVisualStylingProvider;
@property (retain, nonatomic, getter=_styleNamesToVisualStylings) NSMutableDictionary *styleNamesToVisualStylings;
@property (retain, nonatomic, getter=_viewsAndLayersToCoreMaterialVisualStyles) NSMapTable *viewsAndLayersToCoreMaterialVisualStyles;
@property (retain, nonatomic, getter=_viewsAndLayersToObserverBlocks) NSMapTable *viewsAndLayersToObserverBlocks;
@property (retain, nonatomic, getter=_privateObservers) NSPointerArray *privateObservers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_visualStylingProviderForStyleSetNamed:(id)a0 inBundle:(id)a1;
+ (Class)_visualStylingClass;
+ (id)_visualStylingProviderForRecipe:(long long)a0 andCategory:(long long)a1;
+ (id)_visualStylingProviderForRecipe:(long long)a0 category:(long long)a1 andUserInterfaceStyle:(long long)a2;
+ (id)_visualStylingProviderForRecipeNamed:(id)a0 andCategory:(long long)a1;

- (void)_removeObserver:(id)a0;
- (void)_addObserver:(id)a0;
- (void)providedStylesDidChangeForProvider:(id)a0;
- (void).cxx_destruct;
- (id)_visualStylingForStyle:(long long)a0;
- (void)automaticallyUpdateView:(id)a0 withStyle:(long long)a1;
- (void)stopAutomaticallyUpdatingView:(id)a0;
- (BOOL)isAutomaticallyUpdatingView:(id)a0;
- (void)automaticallyUpdateView:(id)a0 withStyle:(long long)a1 andObserverBlock:(id /* block */)a2;
- (id)newAutomaticallyUpdatingViewWithStyle:(long long)a0;
- (void)_automaticallyUpdateView:(id)a0 withStyleNamed:(id)a1 andObserverBlock:(id /* block */)a2;
- (id)_visualStylingForStyleNamed:(id)a0;
- (void)automaticallyUpdateLayer:(id)a0 withStyle:(long long)a1 andObserverBlock:(id /* block */)a2;
- (id)_visualStylingForContinuallyUpdatedView:(id)a0;
- (void)stopAutomaticallyUpdatingLayer:(id)a0;
- (void)_automaticallyUpdateViewOrLayer:(id)a0 withStyleNamed:(id)a1 andObserverBlock:(id /* block */)a2;
- (BOOL)_isAutomaticallyUpdatingViewOrLayer:(id)a0;
- (void)_stopAutomaticallyUpdatingViewOrLayer:(id)a0;
- (void)_updateVisualStyleOfViewOrLayer:(id)a0;
- (void)automaticallyUpdateLayer:(id)a0 withStyle:(long long)a1;
- (id)initWithCoreMaterialVisualStylingProvider:(id)a0;
- (BOOL)isAutomaticallyUpdatingLayer:(id)a0;

@end
