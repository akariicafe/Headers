@class NSMutableDictionary, NTKFaceViewController, NTKFace, UIView, NSMutableSet;

@interface NTKGreenfieldHighlightableFaceContainerView : UIView {
    NTKFace *_originalFace;
    NTKFaceViewController *_faceViewController;
    UIView *_overlayView;
    UIView *_highlightedDisplaysContainerView;
    NSMutableDictionary *_highlightedSlotToDisplayWrapperViewMapping;
    NSMutableSet *_highlightedSlots;
    NSMutableDictionary *_slotToTemplateMapping;
}

+ (id)_createFaceForDisplayingFrom:(id)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFace:(id)a0;
- (void)_toggleHighlight:(BOOL)a0 forComplicationWrapperViewAtSlot:(id)a1;
- (void)_updateTemplateForSlot:(id)a0;
- (void)setComplicationDisplayViewState:(long long)a0 forSlot:(id)a1;
- (void)setTemplate:(id)a0 forSlot:(id)a1;

@end
