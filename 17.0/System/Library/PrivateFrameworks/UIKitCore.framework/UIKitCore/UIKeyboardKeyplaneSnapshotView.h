@class UIImageView;

@interface UIKeyboardKeyplaneSnapshotView : UIView {
    UIImageView *_fgView;
    UIImageView *_bgView;
}

- (void)setAlpha:(double)a0;
- (void).cxx_destruct;
- (id)initWithKeyplaneView:(id)a0;
- (id)snapshotFromView:(id)a0;

@end
