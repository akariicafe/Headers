@class NSString, NSPointerArray;
@protocol MTVisualStyleSetProviding;

@interface MTCoreMaterialVisualStylingProvider : NSObject

@property (readonly, copy, nonatomic) NSString *visualStyleSetName;
@property (retain, nonatomic, getter=_visualStyleSet, setter=_setVisualStyleSet:) id<MTVisualStyleSetProviding> visualStyleSet;
@property (retain, nonatomic, getter=_observers) NSPointerArray *observers;

+ (id)coreMaterialVisualStylingProviderForRecipe:(id)a0 andCategory:(id)a1;
+ (id)coreMaterialVisualStylingProviderForStyleSetNamed:(id)a0 inBundle:(id)a1;
+ (BOOL)canGenerateVisualStyleSetFromRecipe:(id)a0;

- (void)removeObserver:(id)a0;
- (id)visualStylingForStyle:(id)a0;
- (void)_notifyObserversWithBlock:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)updateVisualStyleSetFromRecipe:(id)a0 andCategory:(id)a1;
- (void)addObserver:(id)a0;
- (BOOL)updateVisualStyleSetGeneratedFromRecipe:(id)a0;

@end
