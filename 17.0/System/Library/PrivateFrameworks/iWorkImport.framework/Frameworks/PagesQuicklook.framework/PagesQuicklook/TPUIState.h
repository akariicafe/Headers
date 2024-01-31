@class NSString, NSDictionary, TSDFreehandDrawingToolkitUIState, TSKSelectionPath, TSKPencilAnnotationUIState, TSKAnnotationAuthor;

@interface TPUIState : NSObject <NSCopying, TSAUIState> {
    BOOL _sectionTemplateDrawablesSelectable;
    long long _viewScaleMode;
    BOOL _wordCountHUDVisible;
    int _wordCountHUDType;
    struct CGPoint { double x; double y; } _wordCountHUDPosition;
    BOOL _shouldShowCommentSidebar;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _windowFrame;
    NSString *_selectedInspectorSwitchSegmentIdentifier;
    BOOL _inspectorHidden;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (copy, nonatomic) NSDictionary *chartUIState;
@property (nonatomic) BOOL rulersVisible;
@property (nonatomic) BOOL layoutBordersVisible;
@property (nonatomic) BOOL showsComments;
@property (readonly, nonatomic) BOOL hasShowsCTMarkup;
@property (nonatomic) BOOL showsCTMarkup;
@property (readonly, nonatomic) BOOL hasShowsCTDeletions;
@property (nonatomic) BOOL showsCTDeletions;
@property (nonatomic) BOOL changeTrackingPaused;
@property (nonatomic) BOOL showsFlowMode;
@property (nonatomic) BOOL showsPageNavigator;
@property (nonatomic) BOOL showsTOCNavigator;
@property (nonatomic) BOOL pencilAnnotationsHidden;
@property (nonatomic) BOOL showsActivityStream;
@property (nonatomic) long long pageViewState;
@property (nonatomic) double viewScale;
@property (nonatomic) BOOL showUserDefinedGuides;
@property (copy, nonatomic) NSString *authorForFilteringName;
@property (retain, nonatomic) TSKAnnotationAuthor *authorForFiltering;
@property (retain, nonatomic) TSDFreehandDrawingToolkitUIState *freehandDrawingToolkitUIState;
@property (retain, nonatomic) TSKPencilAnnotationUIState *pencilAnnotationUIState;
@property (nonatomic) long long viewScaleModeiOS;
@property (nonatomic) double presentationAutoScrollSpeed;
@property (nonatomic) BOOL showUserDefinedPageTemplateGuides;
@property (nonatomic) double tocOrPageNavWidth;
@property (nonatomic) double activityOrAnnotationWidth;
@property (nonatomic) BOOL editingDisabled;
@property (copy, nonatomic) TSKSelectionPath *selectionPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1 context:(id)a2;
- (id)UIStateForChart:(id)a0;
- (id)archivedUIStateInContext:(id)a0;
- (void)resetForInitialViewing;
- (void)setUIState:(id)a0 forChart:(id)a1;
- (BOOL)isEqualToUIState:(id)a0;

@end
