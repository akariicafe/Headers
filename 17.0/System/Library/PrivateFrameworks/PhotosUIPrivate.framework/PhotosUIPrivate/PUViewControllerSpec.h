@class PUViewControllerSpecChange, UITraitCollection, NSHashTable;

@interface PUViewControllerSpec : NSObject

@property (readonly, nonatomic) NSHashTable *_changeObservers;
@property (nonatomic, setter=_setChangeCount:) long long _changeCount;
@property (nonatomic, setter=_setNeedsUpdateLayoutStyle:) BOOL _needsUpdateLayoutStyle;
@property (readonly, nonatomic) long long currentLayoutStyle;
@property (readonly, nonatomic) PUViewControllerSpecChange *currentChange;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) struct CGSize { double width; double height; } layoutReferenceSize;
@property (nonatomic, getter=isPresentedForSecondScreen) BOOL presentedForSecondScreen;
@property (nonatomic) struct CGSize { double width; double height; } secondScreenSize;
@property (nonatomic) BOOL prefersCompactLayoutForSplitScreen;

- (void)performChanges:(id /* block */)a0;
- (id)init;
- (void)updateIfNeeded;
- (void)registerChangeObserver:(id)a0;
- (id)newSpecChange;
- (void)unregisterChangeObserver:(id)a0;
- (void)_willChange;
- (struct CGSize { double x0; double x1; })_portraitOrientedSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_didChange;
- (void)_publishChange:(id)a0;
- (void)_invalidateLayoutStyle;
- (void)_setCurrentChange:(id)a0;
- (void)_setCurrentLayoutStyle:(long long)a0;
- (void)_updateCurrentLayoutStyleIfNeeded;
- (void)assertInsideChangesBlock;

@end
