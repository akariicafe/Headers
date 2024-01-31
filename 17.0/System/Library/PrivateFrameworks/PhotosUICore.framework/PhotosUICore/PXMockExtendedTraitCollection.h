@class PXUpdater;

@interface PXMockExtendedTraitCollection : PXExtendedTraitCollection <PXMockMutableExtendedTraitCollection> {
    PXUpdater *_updater;
}

@property (nonatomic) long long userInterfaceIdiom;
@property (nonatomic) long long layoutSizeClass;
@property (nonatomic) long long layoutOrientation;
@property (nonatomic) struct CGSize { double width; double height; } layoutReferenceSize;
@property (nonatomic) long long windowOrientation;
@property (nonatomic) double displayScale;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsets;
@property (nonatomic) long long contentSizeCategory;
@property (nonatomic) long long formFactor;
@property (nonatomic) unsigned long long visibleChromeElements;

- (void)unregisterObservations;
- (long long)layoutSizeSubclass;
- (void)performChanges:(id /* block */)a0;
- (void)registerObservations;
- (void)_invalidateLayoutSizeClass;
- (void)_updateLayoutSizeClass;
- (id)initWithViewController:(id)a0;
- (void)didPerformChanges;
- (void)_invalidateLayoutReferenceSizeAndDisplayScale;
- (id)initWithLayoutSizeClass:(long long)a0;
- (void)_setNeedsUpdate;
- (void)_invalidateSafeAreaInsets;
- (void)_updateLayoutReferenceSizeAndDisplayScale;
- (void).cxx_destruct;
- (id)initWithFormFactor:(long long)a0 orientation:(long long)a1 visibleChromeElements:(unsigned long long)a2;
- (void)_updateSafeAreaInsets;

@end
