@class NSString, NSArray;

@interface ICPaperDocumentTextAttachmentView : UIView <UIContextMenuInteractionDelegate, UIPointerInteractionDelegate, ICAccessibilityRotorSearchElement, UIGestureRecognizerDelegate, ICPaperDocumentEngagementDataProvider> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_paperDidSaveSelectorDelayer;
    void /* unknown type, empty encoding */ kMinMediaHeight;
    void /* unknown type, empty encoding */ kMinMediaHeightFraction;
    void /* unknown type, empty encoding */ attachmentChangeNotifications;
    void /* unknown type, empty encoding */ task;
    void /* unknown type, empty encoding */ $__lazy_storage_$_smallBrickView;
    void /* unknown type, empty encoding */ displayMode;
    void /* unknown type, empty encoding */ viewProvider;
    void /* unknown type, empty encoding */ headerView;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ inlinePaperDocumentView;
    void /* unknown type, empty encoding */ paperDocumentContainerView;
    void /* unknown type, empty encoding */ internalErrorLabel;
    void /* unknown type, empty encoding */ idleTimeInterval;
    void /* unknown type, empty encoding */ isRevertingChanges;
    void /* unknown type, empty encoding */ isUpgradingLegacyAttachment;
    void /* unknown type, empty encoding */ quickLookTapGestureRecognizer;
    void /* unknown type, empty encoding */ pinchToResizeGestureRecognizer;
    void /* unknown type, empty encoding */ textContainer;
    void /* unknown type, empty encoding */ snapshotInfo;
    void /* unknown type, empty encoding */ userScaleAtStartOfZoomGesture;
    void /* unknown type, empty encoding */ _userScale;
    void /* unknown type, empty encoding */ shouldUpgradeAttachmentAfterQuickLookIsDismissed;
    void /* unknown type, empty encoding */ liveStreamMessenger;
    void /* unknown type, empty encoding */ participantDetailsDataSource;
    void /* unknown type, empty encoding */ showParticipantCursors;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (readonly, nonatomic) NSArray *supportedRotorTypes;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } textRangeInNote;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) void /* unknown type, empty encoding */ engagementData;
@property (nonatomic, copy) NSArray *accessibilityElements;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic, retain) void /* unknown type, empty encoding */ textAttachment;

- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)tiledViewAttachmentViews;
- (id)_icaxEnclosingTextView;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_icaxRangeInTextStorage;
- (void)paperDidSaveDidQuiesce;
- (id)paperDocumentEngagementData;
- (void)pinch:(id)a0;
- (void)quickLook:(id)a0;
- (void)resetPaperDocumentEngagementData;
- (void)updateHeaderConfiguration;

@end
