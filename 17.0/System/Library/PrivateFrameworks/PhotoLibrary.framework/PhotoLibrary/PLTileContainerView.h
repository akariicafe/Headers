@class PLPhotoTileViewController;

@interface PLTileContainerView : UIView {
    PLPhotoTileViewController *_photoTileController;
}

- (void)willMoveToSuperview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canBecomeFirstResponder;
- (void)clearBackReference;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 photoTileController:(id)a1;

@end
