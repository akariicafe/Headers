@interface StickersUI.StickerAddEffectTransitionAnimator : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ transitionCellView;
    void /* unknown type, empty encoding */ transitionPreviewView;
    void /* unknown type, empty encoding */ needsTransition;
    void /* unknown type, empty encoding */ needsTransitionToCollectionView;
    void /* unknown type, empty encoding */ stickerAspectRatio;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ transitionWindow;
    void /* unknown type, empty encoding */ originView;
    void /* unknown type, empty encoding */ originViewFrameInWindow;
    void /* unknown type, empty encoding */ stickerIdentifier;
    void /* unknown type, empty encoding */ isAnimating;
    void /* unknown type, empty encoding */ duration;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameIncludingStrokeForView:(id)a0;
- (double)transitionScaleForView:(id)a0;

@end
