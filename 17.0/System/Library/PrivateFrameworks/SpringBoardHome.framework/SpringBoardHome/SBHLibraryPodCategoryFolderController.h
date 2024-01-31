@interface SBHLibraryPodCategoryFolderController : SBHLibraryPodFolderController

+ (Class)_contentViewClass;
+ (id)iconLocation;

- (id)currentIconListView;
- (void)iconListView:(id)a0 didRemoveIconView:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)contentScrollView;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)handleTapGesture:(id)a0;
- (void)_logCategoryVisibilityChangedTo:(BOOL)a0;

@end
