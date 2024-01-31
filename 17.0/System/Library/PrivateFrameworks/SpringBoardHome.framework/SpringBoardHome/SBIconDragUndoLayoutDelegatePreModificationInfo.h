@class NSArray, SBRootFolderController, NSMapTable;

@interface SBIconDragUndoLayoutDelegatePreModificationInfo : NSObject

@property (readonly, nonatomic) SBRootFolderController *rootFolderController;
@property (readonly, copy, nonatomic) NSArray *visibleListViews;
@property (readonly, nonatomic) NSMapTable *originalIconsPerListView;
@property (readonly, nonatomic) NSMapTable *originalScreenLocationsPerIcon;

- (void).cxx_destruct;
- (id)initWithRootFolderController:(id)a0;

@end
