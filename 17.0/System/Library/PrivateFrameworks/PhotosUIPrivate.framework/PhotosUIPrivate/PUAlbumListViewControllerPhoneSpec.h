@interface PUAlbumListViewControllerPhoneSpec : PUAlbumListViewControllerCommonPhoneSpec

- (double)sectionHeaderHeight;
- (struct CGSize { double x0; double x1; })imageSize;
- (double)sectionFooterHeight;
- (void)configureStackViewWithGridStyle:(id)a0;
- (struct CGSize { double x0; double x1; })stackSize;
- (unsigned long long)folderStackViewStyle;
- (struct CGSize { double x0; double x1; })stackSizeForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (struct CGSize { double x0; double x1; })cellSizeForStackSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldShowSectionHeaders;
- (long long)cellContentViewLayout;
- (unsigned long long)stackViewStyle;
- (void)configureGridLayout:(id)a0 forLayoutReferenceSize:(struct CGSize { double x0; double x1; })a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (BOOL)shouldUseTableView;
- (struct CGSize { double x0; double x1; })imageSizeForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetsForLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
