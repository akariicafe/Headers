@interface PosterBoard.AmbientCollectionViewCell : UICollectionViewCell <PosterBoard.AmbientEditingCollectionViewControllerObserver, PRUISAmbientPosterViewControllerDelegate> {
    void /* unknown type, empty encoding */ alphaForHiddenPoster;
    void /* unknown type, empty encoding */ PHOTOS_PROVIDER_BUNDLE_IDENTIFIER;
    void /* unknown type, empty encoding */ hideOrDeleteButtonSize;
    void /* unknown type, empty encoding */ buttonDistanceFromCellTop;
    void /* unknown type, empty encoding */ buttonDistanceFromCellEdge;
    void /* unknown type, empty encoding */ editingButtonOffset;
    void /* unknown type, empty encoding */ shadowOffset;
    void /* unknown type, empty encoding */ shadowRadius;
    void /* unknown type, empty encoding */ shadowOpacity;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ posterModel;
    void /* unknown type, empty encoding */ scaleInLayout;
    void /* unknown type, empty encoding */ editingButton;
    void /* unknown type, empty encoding */ hideOrDeleteButton;
    void /* unknown type, empty encoding */ editingViewController;
    void /* unknown type, empty encoding */ ambientPosterViewController;
    void /* unknown type, empty encoding */ posterCornerRadius;
    void /* unknown type, empty encoding */ shadowView;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)ambientEditingCollectionViewController:(id)a0 didUpdatePosterConfiguration:(id)a1;
- (void)ambientEditingCollectionViewControllerDidUpdatePosters:(id)a0;
- (void)ambientPosterViewController:(id)a0 relinquishExtensionInstanceIdentifier:(id)a1;
- (id)ambientPosterViewControllerRequestExtensionInstanceIdentifier:(id)a0;

@end
