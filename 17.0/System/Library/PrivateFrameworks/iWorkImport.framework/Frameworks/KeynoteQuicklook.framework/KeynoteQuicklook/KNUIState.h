@class NSString, NSArray, NSSet, NSMutableDictionary, KNSlideCollectionSelection, TSKSelectionPath, TSDFreehandDrawingToolkitUIState, KNMacUILayout;

@interface KNUIState : NSObject <NSCopying, TSAUIState> {
    double _mobileCanvasViewScale;
    struct CGPoint { double x; double y; } _mobileCanvasOffset;
    double _desktopCanvasViewScale;
    struct CGPoint { double x; double y; } _desktopCanvasOffset;
    NSMutableDictionary *_chartUIState;
}

@property (copy, nonatomic) TSKSelectionPath *selectionPath;
@property (readonly, nonatomic) KNSlideCollectionSelection *slideTreeSelection;
@property (nonatomic) double canvasViewScale;
@property (nonatomic) struct CGPoint { double x0; double x1; } canvasOffset;
@property (copy, nonatomic) KNMacUILayout *documentUILayout;
@property (nonatomic) BOOL slideViewFitsContentInWindow;
@property (nonatomic) double lightTableZoomScale;
@property (nonatomic) BOOL lightTableHidesSkippedSlides;
@property (nonatomic) BOOL showsMobileLightTable;
@property (nonatomic) double mobileLightTableZoomScale;
@property (nonatomic) BOOL mobileLightTableHidesSkippedSlides;
@property (nonatomic) BOOL showsMobileOutline;
@property (nonatomic) struct CGPoint { double x; double y; } desktopMainWindowOrigin;
@property (nonatomic) struct CGSize { double width; double height; } desktopMainContentSize;
@property (nonatomic) double desktopElementListViewWidth;
@property (nonatomic) double desktopActivityStreamViewWidth;
@property (nonatomic) double desktopNavigatorViewWidth;
@property (nonatomic) double desktopOutlineViewWidth;
@property (nonatomic) double desktopPresenterNotesHeight;
@property (nonatomic) double desktopPresenterNotesScrollPosition;
@property (nonatomic) BOOL desktopOutlineViewDefaultFixed;
@property (copy, nonatomic) NSSet *collapsedSlideNodes;
@property (copy, nonatomic) NSSet *outlineCollapsedSlideNodes;
@property (copy, nonatomic) NSSet *outlineHasBodySlideNodes;
@property (copy, nonatomic) NSArray *elementListExpandedGroups;
@property (nonatomic) BOOL showSlideGuides;
@property (nonatomic) BOOL showMasterGuides;
@property (nonatomic) BOOL showsComments;
@property (nonatomic) BOOL showsRuler;
@property (nonatomic) BOOL commentsPrintingToggleEnabled;
@property (retain, nonatomic) TSDFreehandDrawingToolkitUIState *freehandDrawingToolkitUIState;
@property (nonatomic) BOOL editingDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1 context:(id)a2;
- (id)UIStateForChart:(id)a0;
- (id)archivedUIStateInContext:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1 context:(id)a2;
- (void)resetForInitialViewing;
- (void)setSlideTreeSelection:(id)a0 withDocumentRoot:(id)a1;
- (void)setUIState:(id)a0 forChart:(id)a1;
- (void)updateOutlineStateFromSlideTree:(id)a0;

@end
