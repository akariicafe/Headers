@class UITraitCollection;

@interface _UITraitBasedAppearance : _UIAppearance {
    UITraitCollection *_traitCollection;
}

+ (void)_setHasAnyCustomizations;
+ (id)_appearanceForTraitCollection:(id)a0 forClass:(Class)a1 withContainerList:(id)a2;
+ (BOOL)_hasCustomizationsForTraitCollection:(id)a0 class:(Class)a1 guideClass:(Class)a2;
+ (BOOL)_hasAnyCustomizations;

- (id)_traitCollection;
- (void)dealloc;
- (void)_invalidateAppearanceInWindow:(id)a0;
- (BOOL)_isValidAppearanceForCustomizableObject:(id)a0;

@end
