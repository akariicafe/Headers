@interface SBHLibraryPodCategoryFolderView : SBHLibraryPodFolderView

+ (Class)defaultIconListViewClass;

- (void)_configureIconListView:(id)a0;
- (struct CGSize { double x0; double x1; })_iconSpacingForIconListView;
- (void)_orientationDidChange:(long long)a0;
- (BOOL)isLibraryPodCategoryFolderView;

@end
