@class TSKSelectionPath;

@interface TNSheetUIState : NSObject <NSCopying>

@property (class, readonly, nonatomic) long long currentDeviceIdiom;

@property (nonatomic) float viewScale;
@property (nonatomic) float previousViewScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } scrollPosition;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousVisibleRect;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } previousScrollPosition;
@property (nonatomic) BOOL hasVisibleRect;
@property (nonatomic) BOOL hasPreviousVisibleRect;
@property (nonatomic) long long archivedDeviceIdiom;
@property (retain, nonatomic) TSKSelectionPath *selectionPath;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1 context:(id)a2;
- (void)clearPreviousVisibleRect;
- (void)clearVisibleRect;
- (id)p_persistableSelectionPathFromSelectionPath:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1 context:(id)a2 beforeVersion:(unsigned long long)a3;
- (void)updateForCurrentDeviceIdiomIfNecessaryWithDefaultViewScale:(float)a0;

@end
