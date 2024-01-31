@class UILongPressGestureRecognizer, NSMutableDictionary, NSString, UITapGestureRecognizer;
@protocol CKMessageEntryRichTextViewDelegate;

@interface CKMessageEntryRichTextView : CKMessageEntryTextView <NSTextStorageDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSMutableDictionary *mediaObjects;
@property (retain, nonatomic) NSMutableDictionary *pluginDisplayContainers;
@property (retain, nonatomic) NSMutableDictionary *composeImages;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic) BOOL allowCalloutActions;
@property (nonatomic) BOOL disableAttachments;
@property (weak, nonatomic) id<CKMessageEntryRichTextViewDelegate> delegate;
@property (nonatomic) char balloonColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setNeedsDisplayCurrentRenderAttributesForView:(id)a0;

- (void)validateCommand:(id)a0;
- (void)cut:(id)a0;
- (id)targetForAction:(SEL)a0 withSender:(id)a1;
- (void)dealloc;
- (void)setAttributedText:(id)a0;
- (void)correctedTypedText:(id)a0 rangeOfReplacement:(id)a1;
- (void)copy:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;
- (BOOL)canResignFirstResponder;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (BOOL)isSingleLineDocument;
- (void)paste:(id)a0;
- (BOOL)_canSuggestSupplementalItemsForCurrentSelection;
- (void)_cancelChooseSupplementalItemToInsert;
- (void)_chooseSupplementalItemToInsert:(id)a0 replacementRange:(id)a1 completionHandler:(id /* block */)a2;
- (void)_insertSupplementalItem:(id)a0 forString:(id)a1 replacementRange:(id)a2;
- (void)_insertionPointEnteredRange:(id)a0 string:(id)a1 supplementalItems:(id)a2;
- (void)_insertionPointExitedRangeWithSupplementalItems;
- (BOOL)_reconfigureWithLayoutManager:(id)a0 triggeredByLayoutManagerAccess:(BOOL)a1 triggeringSelector:(SEL)a2;
- (void)_showCustomInputView;
- (id)pasteConfiguration;
- (void)textStorage:(id)a0 willProcessEditing:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 changeInLength:(long long)a3;
- (id)compositionText;
- (id)_compositionFromSelection;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeFromUITextRange:(id)a0;
- (void)_setAnimatingMentionsHidden:(BOOL)a0;
- (void)_textKit2_handleTapOrLongPress:(id)a0 isLongPress:(BOOL)a1;
- (id)attributedTextForCompositionText:(id)a0;
- (id)cachedMediaObjectForTransferGUID:(id)a0;
- (id)cachedPluginDisplayContainerForGUID:(id)a0;
- (id)composeImageForTransferGUID:(id)a0 traitCollection:(id)a1;
- (void)handlePastedString:(id)a0 toRange:(id)a1;
- (void)handleTapOrLongPress:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingTextLayoutManager:(BOOL)a1 shouldDisableAttachments:(BOOL)a2;
- (id)pasteboard;
- (void)previewDidChange:(id)a0;
- (void)setCompositionText:(id)a0;
- (void)setNeedsDisplayCurrentRenderAttributes;
- (void)updateComposeImages;

@end
