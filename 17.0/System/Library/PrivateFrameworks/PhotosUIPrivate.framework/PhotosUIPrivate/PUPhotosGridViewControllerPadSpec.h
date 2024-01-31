@interface PUPhotosGridViewControllerPadSpec : PUPhotosGridViewControllerSpec

- (long long)sectionHeaderStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (unsigned short)thumbnailImageFormat;
- (BOOL)wantsCustomNavigationTransition;
- (id)albumPickerViewControllerSpec;
- (struct CGSize { double x0; double x1; })baseInterItemSpacing;
- (BOOL)canDisplayEditActionsInNavigationBar;
- (BOOL)canDisplayOptionsInPopover;
- (BOOL)canDisplaySlideshowButton;
- (long long)cellBannerTextAlignment;
- (long long)cellFillMode;
- (void)configureCollectionViewGridLayout:(id)a0 forWidth:(double)a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (BOOL)shouldPlaceDeleteInCenterToolbarPosition;
- (BOOL)shouldPlaceSelectAllButtonInRightNavigationBar;
- (BOOL)shouldUseAspectItems;
- (BOOL)usesStackPopTransition;
- (BOOL)wantsBackButtonTitleForPhotoBrowser;

@end
