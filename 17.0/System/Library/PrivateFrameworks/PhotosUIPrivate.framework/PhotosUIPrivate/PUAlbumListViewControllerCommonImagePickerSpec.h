@interface PUAlbumListViewControllerCommonImagePickerSpec : PUAlbumListViewControllerCommonPhoneSpec

- (double)sectionHeaderHeight;
- (struct CGSize { double x0; double x1; })imageSize;
- (double)sectionFooterHeight;
- (BOOL)showsDeleteButtonOnCellContentView;
- (void)configureStackViewWithGridStyle:(id)a0;
- (struct CGSize { double x0; double x1; })stackSize;
- (unsigned long long)folderStackViewStyle;
- (long long)cellContentViewLayout;
- (unsigned long long)stackViewStyle;
- (BOOL)shouldUseTableView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetsForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldUseCollageForCloudFeedPlaceholder;

@end
