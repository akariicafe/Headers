@class SBHIconModel;
@protocol SBHIconStateUnarchiverIconSource, SBHIconStateUnarchiverDelegate;

@interface SBHIconStateUnarchiver : NSObject

@property (readonly, nonatomic) id archive;
@property (readonly, nonatomic) BOOL postNewsWidgetMigration;
@property (retain, nonatomic) SBHIconModel *iconModel;
@property (retain, nonatomic) id<SBHIconStateUnarchiverIconSource> iconSource;
@property (retain, nonatomic) id<SBHIconStateUnarchiverDelegate> delegate;
@property (nonatomic) BOOL removesEmptyFolders;

+ (void)_getFolderDisplayName:(id *)a0 defaultDisplayName:(id *)a1 uniqueIdentifier:(id *)a2 forRepresentation:(id)a3 iconSource:(id)a4;

- (void)getTodayListProperties:(struct SBHIconStateArchiverListProperties { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x2; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x3; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x4; } x2; unsigned long long x3; unsigned long long x4; BOOL x5; long long x6; unsigned long long x7; unsigned long long x8; } *)a0;
- (id)init;
- (id)_newFolderIconForFolder:(id)a0;
- (struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x2; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x3; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x4; })_gridSizeClassSizes;
- (unsigned long long)_allowedGridSizeClassesForTodayList;
- (void)getIgnoredListProperties:(struct SBHIconStateArchiverListProperties { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x2; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x3; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x4; } x2; unsigned long long x3; unsigned long long x4; BOOL x5; long long x6; unsigned long long x7; unsigned long long x8; } *)a0;
- (id)_widgetIconFromRepresentation:(id)a0 context:(id)a1;
- (unsigned long long)_listRotatedLayoutClusterGridSizeClass;
- (unsigned long long)_maxListCountForFolders;
- (void)getFavoriteTodayListProperties:(struct SBHIconStateArchiverListProperties { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x2; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x3; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x4; } x2; unsigned long long x3; unsigned long long x4; BOOL x5; long long x6; unsigned long long x7; unsigned long long x8; } *)a0;
- (void)applyProperties:(const struct SBHIconStateArchiverListProperties { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x2; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x3; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x4; } x2; unsigned long long x3; unsigned long long x4; BOOL x5; long long x6; unsigned long long x7; unsigned long long x8; } *)a0 asDefaultPropertiesToFolder:(id)a1;
- (void)getDockListProperties:(struct SBHIconStateArchiverListProperties { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x2; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x3; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x4; } x2; unsigned long long x3; unsigned long long x4; BOOL x5; long long x6; unsigned long long x7; unsigned long long x8; } *)a0;
- (id)_customIconElementFromRepresentation:(id)a0 context:(id)a1;
- (unsigned long long)_listsIconLayoutBehaviorForFolderClass:(Class)a0;
- (id)_folderFromRepresentation:(id)a0 withContext:(id)a1;
- (long long)_suggestionSourceFromRepresentation:(id)a0;
- (id)effectiveDelegate;
- (long long)_listsFixedIconLocationBehaviorForFolderClass:(Class)a0;
- (void)getProperties:(struct SBHIconStateArchiverListProperties { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x2; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x3; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x4; } x2; unsigned long long x3; unsigned long long x4; BOOL x5; long long x6; unsigned long long x7; unsigned long long x8; } *)a0 forFolderClass:(Class)a1;
- (void)_getFolderDisplayName:(id *)a0 defaultDisplayName:(id *)a1 uniqueIdentifier:(id *)a2 forRepresentation:(id)a3;
- (id)_sanitizedFixedIconLocationsFromDictionary:(id)a0;
- (unsigned long long)_maxIconCountForDock;
- (BOOL)_canAddIconDataSource:(id)a0 toIcon:(id)a1;
- (id)unarchive;
- (BOOL)_listsAllowRotatedLayoutForFolderClass:(Class)a0;
- (id)_batteryElementWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithArchive:(id)a0;
- (id)_listWithIcons:(id)a0 properties:(const struct SBHIconStateArchiverListProperties { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x2; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x3; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x4; } x2; unsigned long long x3; unsigned long long x4; BOOL x5; long long x6; unsigned long long x7; unsigned long long x8; } *)a1 identifier:(id)a2 folder:(id)a3 overflow:(id)a4;
- (unsigned long long)_allowedGridSizeClassesForFolderClass:(Class)a0;
- (struct SBHIconGridSize { unsigned short x0; unsigned short x1; })_listGridSizeForFolderClass:(Class)a0;
- (id)_iconFromRepresentation:(id)a0 withContext:(id)a1;
- (unsigned long long)_allowedGridSizeClassesForDock;
- (struct SBHIconGridSize { unsigned short x0; unsigned short x1; })_listWithNonDefaultSizedIconsGridSizeForFolderClass:(Class)a0;
- (id)_applicationIconFromRepresentation:(id)a0 context:(id)a1;
- (id)_listFromRepresentation:(id)a0 properties:(const struct SBHIconStateArchiverListProperties { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x2; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x3; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x4; } x2; unsigned long long x3; unsigned long long x4; BOOL x5; long long x6; unsigned long long x7; unsigned long long x8; } *)a1 identifier:(id)a2 context:(id)a3 overflow:(id)a4;
- (id)initWithArchive:(id)a0 iconModel:(id)a1;
- (id)_nodeFromRepresentation:(id)a0 context:(id)a1;
- (Class)_folderClassForFolderType:(id)a0 context:(id)a1;

@end
