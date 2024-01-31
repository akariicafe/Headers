@class NSMutableDictionary, NSHashTable, HUGridLayoutOptions, NSString;

@interface HUGridFlowLayout : UICollectionViewFlowLayout <HUControllableCollectionViewLayout>

@property (readonly, nonatomic) NSMutableDictionary *indexPathsByItems;
@property (readonly, nonatomic) NSMutableDictionary *overrideAttributesByIndexPath;
@property (retain, nonatomic) NSHashTable *childGridLayouts;
@property (weak, nonatomic) HUGridFlowLayout *parentGridLayout;
@property (readonly, nonatomic) BOOL shouldFlipForRTL;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layoutAttributesClass;

- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)a0 withTargetPosition:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (void)invalidateLayout;
- (BOOL)flipsHorizontallyInOppositeLayoutDirection;
- (id)_modifiedLayoutAttributesForAttributes:(id)a0;
- (void)_updateContainingGridLayout;
- (void)applyOverrideAttributes:(id)a0 toItem:(id)a1 atIndexPath:(id)a2;
- (void)clearAllOverrideAttributesForItems:(id)a0;
- (void)clearOverrideAttributesForItem:(id)a0 atIndexPath:(id)a1;
- (id)initForRTL:(BOOL)a0;
- (void)registerChildGridLayout:(id)a0;
- (void)unregisterChildGridLayout:(id)a0;

@end
