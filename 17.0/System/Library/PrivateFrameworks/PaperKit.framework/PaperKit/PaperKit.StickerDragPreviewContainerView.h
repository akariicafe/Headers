@interface PaperKit.StickerDragPreviewContainerView : UIView <_UIDragPreviewContainer> {
    void /* unknown type, empty encoding */ isDropAnimation;
    void /* unknown type, empty encoding */ isLifted;
    void /* unknown type, empty encoding */ meshView;
    void /* unknown type, empty encoding */ transformView;
    void /* unknown type, empty encoding */ shineView;
    void /* unknown type, empty encoding */ shadowView;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_animateDropAlongsideAnimator:(id)a0 completion:(id /* block */)a1;
- (void)_animateLiftAlongsideAnimator:(id)a0 completion:(id /* block */)a1;
- (void)_animateLiftCancellationAlongsideAnimator:(id)a0 completion:(id /* block */)a1;
- (void)_preparePreviewContainerWithPreview:(id)a0 source:(id)a1 initialTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;

@end
