@interface PUAlbumListViewControllerCommonPhoneSpec : PUAlbumListViewControllerSpec

- (double)sectionHeaderHeight;
- (double)sectionFooterHeight;
- (BOOL)showsDeleteButtonOnCellContentView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })stackPerspectiveInsets;
- (double)posterSquareCornerRadius;
- (struct UIOffset { double x0; double x1; })stackPerspectiveOffset;
- (double)posterSubitemCornerRadius;
- (struct UIOffset { double x0; double x1; })stackOffset;
- (long long)albumDeletionWarningStyle;
- (id)albumViewControllerSpec;
- (id)emptyStackPhotoDecoration;
- (id)feedViewControllerSpec;
- (id)gridViewControllerSpec;
- (id)panoramaViewControllerSpec;
- (BOOL)shouldUseCollageForCloudFeedPlaceholder;
- (id)stackPhotoDecoration;

@end
