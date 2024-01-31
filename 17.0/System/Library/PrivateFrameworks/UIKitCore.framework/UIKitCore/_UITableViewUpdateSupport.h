@class NSArray, NSMutableIndexSet, UITableViewRowData, NSString, NSMutableArray, UITableView;
@protocol _UITableViewIgnoreDragsToken;

@interface _UITableViewUpdateSupport : NSObject {
    long long oldSection;
    long long newSection;
    long long oldGlobalRow;
    long long newGlobalRow;
    UITableView *tableView;
    struct _NSRange { unsigned long long location; unsigned long long length; } visibleRows;
    NSArray *updateItems;
    UITableViewRowData *oldRowData;
    UITableViewRowData *newRowData;
    struct _NSRange { unsigned long long location; unsigned long long length; } oldRowRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } newRowRange;
    NSMutableIndexSet *movedRows;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } oldTableViewVisibleBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } newTableViewVisibleBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } tableViewVisibleBoundsUnion;
    double tableViewVisibleBoundsOffset;
    long long oldSectionCount;
    long long newSectionCount;
    long long oldGlobalRowCount;
    long long newGlobalRowCount;
    id *animatedCells;
    id *animatedHeaders;
    id *animatedFooters;
    long long globalReorderingRow;
    id _context;
    id<_UITableViewIgnoreDragsToken> _ignoringDragsToken;
    BOOL _updateItemUsedAutomaticRowAnimation;
    NSMutableArray *viewAnimations;
    NSMutableArray *deletedSections;
    NSMutableArray *insertedSections;
    struct _UIDataSourceUpdateMaps { unsigned int oldSectionCount; unsigned int newSectionCount; unsigned int oldGlobalItemCount; unsigned int newGlobalItemCount; unsigned int *oldSectionMap; unsigned int *newSectionMap; unsigned int *oldGlobalItemMap; unsigned int *newGlobalItemMap; BOOL updatesAreInvalid; } _updateMaps;
    NSString *_invalidUpdatesErrorMessage;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
