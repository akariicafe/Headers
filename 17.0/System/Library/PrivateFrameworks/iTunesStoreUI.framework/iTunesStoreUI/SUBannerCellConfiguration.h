@interface SUBannerCellConfiguration : SUItemCellConfiguration

+ (double)minimumRowHeight;
+ (id)copyDefaultContext;
+ (double)rowHeightForContext:(id)a0 representedObject:(id)a1;

- (id)init;
- (void)reloadData;
- (struct CGSize { double x0; double x1; })_imageSizeForLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (id)copyImageDataProvider;
- (void)reloadAfterArtworkLoad;
- (void)reloadImages;
- (void)reloadLayoutInformation;
- (void)reloadStrings;

@end
