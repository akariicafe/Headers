@class PKPass, UIImageView, PKPassSnapshotter;

@interface PKPerformActionPassView : PKPerformActionBackdropView {
    PKPass *_pass;
    PKPassSnapshotter *_snapshotter;
    UIImageView *_passView;
}

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_createSubviews;
- (void)smallShakeImage;
- (void)_loadSnapshotView;
- (struct CGSize { double x0; double x1; })_passImageSize;
- (void)configureWithPass:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithPass:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)shakeImage;

@end
