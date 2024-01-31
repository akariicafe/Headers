@interface PUPhotosPanoramaViewControllerSpec : PULegacyViewControllerSpec

+ (id)padSpec;
+ (id)phoneSpec;

- (double)sectionHeaderHeight;
- (unsigned long long)supportedInterfaceOrientations;
- (unsigned short)thumbnailImageFormat;
- (struct CGSize { double x0; double x1; })_itemSizeForWidth:(double)a0;
- (long long)cellFillMode;
- (void)configureCollectionViewGridLayout:(id)a0 referenceWidth:(double)a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (unsigned short)fastThumbnailImageFormat;
- (double)globalFooterHeight;
- (id)gridSpec;

@end
