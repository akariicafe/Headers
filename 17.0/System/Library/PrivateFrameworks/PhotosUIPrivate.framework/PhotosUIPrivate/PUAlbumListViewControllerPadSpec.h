@interface PUAlbumListViewControllerPadSpec : PUAlbumListViewControllerSpec

- (double)sectionHeaderHeight;
- (struct CGSize { double x0; double x1; })imageSize;
- (double)sectionFooterHeight;
- (BOOL)showsDeleteButtonOnCellContentView;
- (void)configureStackViewWithGridStyle:(id)a0;
- (struct CGSize { double x0; double x1; })stackSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })stackPerspectiveInsets;
- (unsigned long long)folderStackViewStyle;
- (struct CGSize { double x0; double x1; })stackSizeForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (struct CGSize { double x0; double x1; })cellSizeForStackSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldShowSectionHeaders;
- (long long)cellContentViewLayout;
- (unsigned long long)stackViewStyle;
- (void)configureGridLayout:(id)a0 forLayoutReferenceSize:(struct CGSize { double x0; double x1; })a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (double)posterSquareCornerRadius;
- (struct UIOffset { double x0; double x1; })stackPerspectiveOffset;
- (struct CGSize { double x0; double x1; })imageSizeForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (double)posterSubitemCornerRadius;
- (struct UIOffset { double x0; double x1; })stackOffset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetsForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (long long)albumDeletionWarningStyle;
- (id)albumViewControllerSpec;
- (BOOL)canShowVirtualCollections;
- (long long)collageImageContentMode;
- (struct CGSize { double x0; double x1; })collageImageSize;
- (double)collageSpacing;
- (id)emptyStackPhotoDecoration;
- (id)feedViewControllerSpec;
- (id)gridViewControllerSpec;
- (id)panoramaViewControllerSpec;
- (BOOL)shouldUseCollageForCloudFeedPlaceholder;
- (id)stackPhotoDecoration;
- (BOOL)usesStackTransitionToGrid;

@end
