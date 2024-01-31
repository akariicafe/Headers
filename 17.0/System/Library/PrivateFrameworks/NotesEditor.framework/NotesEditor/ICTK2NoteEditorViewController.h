@class NSDate, NSString, ICAttributionSidebarController, ICNote, CALayer, UIView, ICNAEventReporter, NSLayoutConstraint, ICTTTextStorage, ICTK2TextView;

@interface ICTK2NoteEditorViewController : ICNoteEditorViewController <ICAttachmentInsertionDelegate, ICMentionsAnalyticsDelegate, ICHashtagAnalyticsDelegate, PKScribbleInteractionDelegate, UIGestureRecognizerDelegate, UITextViewDrawingDelegate, ICLinkEditorDelegate, ICLinkAcceleratorControllerDelegate>

@property (retain, nonatomic) ICTK2TextView *tk2TextView;
@property (retain, nonatomic) ICAttributionSidebarController *tk2AttributionSidebarController;
@property (retain, nonatomic) NSLayoutConstraint *textViewLeadingConstraint;
@property (retain, nonatomic) CALayer *maskLayer;
@property (retain, nonatomic) NSDate *attributionSidebarOpenedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL shouldShowFloatingSuggestions;
@property (readonly, nonatomic) long long writingDirection;
@property (readonly, nonatomic) BOOL languageHasSpaces;
@property (readonly, nonatomic) ICTTTextStorage *textStorage;
@property (readonly, nonatomic) NSString *searchString;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } lastSelectedRangeForAccelerator;
@property (readonly, nonatomic) ICNote *note;
@property (readonly, nonatomic) UIView *acceleratorHostingView;
@property (readonly, nonatomic) ICNAEventReporter *eventReporter;

- (id)textView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)nibName;
- (void)setAuthorHighlightsController:(id)a0;
- (id)textController;
- (void)acceleratorOriginNeedsUpdate;
- (id)attachmentPresenter:(id)a0 transitionViewForAttachment:(id)a1;
- (id)attributionSidebarController;
- (id)attributionSidebarView;
- (void)authorHighlightsControllerDidPerformHighlightUpdates:(id)a0;
- (void)recreateTextView;
- (void)removeTextView;
- (void)renderAuthorHighlights;
- (void)textStorageDidUpdateDataDetectionResults:(id)a0;
- (id)textViewIfLoaded;

@end
