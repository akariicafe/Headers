@class NSArray, NSMutableArray;
@protocol CACLabeledElementsOverlayManagerDelegate;

@interface CACLabeledElementsOverlayManager : CACSimpleContentViewManager {
    NSMutableArray *_labeledElements;
}

@property (weak, nonatomic) id<CACLabeledElementsOverlayManagerDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *labeledElementsCopy;

+ (void)assignNumbersToLabeledElements:(id)a0 numberingStrategy:(int)a1 startingNumber:(long long)a2;

- (BOOL)isOverlay;
- (void).cxx_destruct;
- (void)hideAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)_findLabeledElementsThatIntersectsLabelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromLabeledElement:(id)a1 justLabelRect:(BOOL)a2 additionalElements:(id)a3;
- (id)_optimizeLabeledElements:(id)a0 startingNumberedLabelsAtIndex:(unsigned long long)a1 forceNoArrow:(BOOL)a2;
- (void)addLabeledElements:(id)a0 forceNoArrow:(BOOL)a1 startingNumberedLabelsAtIndex:(unsigned long long)a2;
- (void)clearLabeledElements;
- (void)showLabeledElementsOverlayWithLabeledElements:(id)a0;
- (void)showLabeledElementsOverlayWithLabeledElements:(id)a0 forceNoArrow:(BOOL)a1;
- (void)showLabeledElementsOverlayWithLabeledElements:(id)a0 forceNoArrow:(BOOL)a1 startingNumberedLabelsAtIndex:(unsigned long long)a2;
- (void)startDelayedDimmingOfNumbers;
- (void)stopDelayedDimmingOfNumbers;

@end
