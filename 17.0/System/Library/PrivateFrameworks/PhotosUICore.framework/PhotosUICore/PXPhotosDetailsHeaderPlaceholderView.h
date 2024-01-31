@class PXTitleSubtitleUILabelTile, UILabel, PXBasicUIViewTileAnimator, PXUIImageTile, PXBasicTileUserData;

@interface PXPhotosDetailsHeaderPlaceholderView : UIView {
    PXBasicUIViewTileAnimator *_tileAnimator;
    struct PXTileGeometry { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame; struct CGPoint { double x; double y; } center; struct CGSize { double width; double height; } size; struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform; double alpha; double zPosition; BOOL hidden; struct CGSize { double width; double height; } contentSize; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect; void *coordinateSpaceIdentifier; } _imageTileGeometry;
    PXUIImageTile *_imageTile;
    PXBasicTileUserData *_imageTileUserData;
    struct PXTileGeometry { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame; struct CGPoint { double x; double y; } center; struct CGSize { double width; double height; } size; struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform; double alpha; double zPosition; BOOL hidden; struct CGSize { double width; double height; } contentSize; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect; void *coordinateSpaceIdentifier; } _initialTextTileGeometry;
    struct PXTileGeometry { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame; struct CGPoint { double x; double y; } center; struct CGSize { double width; double height; } size; struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform; double alpha; double zPosition; BOOL hidden; struct CGSize { double width; double height; } contentSize; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect; void *coordinateSpaceIdentifier; } _textTileGeometry;
    PXTitleSubtitleUILabelTile *_textTile;
    PXBasicTileUserData *_textTileUserData;
    UILabel *_labelForLastBaselineLayout;
}

- (id)viewForLastBaselineLayout;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_layoutTextTile;
- (void)_layoutImageTile;
- (void)_layoutLabelForLastBaselineLayout;
- (void)_layoutTile:(id)a0 withGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })a1 userData:(id)a2;
- (id)initWithRegionOfInterest:(id)a0;

@end
