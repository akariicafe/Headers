@class NSMutableDictionary, NSDictionary, ICTK2TextController, NSTextContentStorage, ICSearchResultRegexMatchFinder;
@protocol ICAttachmentViewDelegate;

@interface ICTK2TextLayoutManager : NSTextLayoutManager <ICTrackedAttributeDelegate>

@property (retain, nonatomic) NSMutableDictionary *tableAttachmentViewControllers;
@property (retain, nonatomic) NSMutableDictionary *viewProviderCache;
@property (readonly, nonatomic) NSDictionary *trackedToDoParagraphs;
@property (readonly, nonatomic) ICTK2TextController *textController;
@property (readonly, nonatomic) NSTextContentStorage *textContentStorage;
@property (weak, nonatomic) id<ICAttachmentViewDelegate> attachmentViewDelegate;
@property (retain, nonatomic) ICSearchResultRegexMatchFinder *highlightPatternRegexFinder;

- (void)invalidateLayoutForRange:(id)a0;
- (id)init;
- (long long)characterIndexForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)dealloc;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)setNeedsLayout;
- (void)setTextContainer:(id)a0;
- (void)setTextContentManager:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)renderingAttributesForLink:(id)a0 atLocation:(id)a1;
- (void)attachmentWillBeDeleted:(id)a0;
- (id)existingAttachmentViewForIdentifier:(id)a0;
- (void)textController:(id)a0 addedTrackedAttribute:(id)a1;
- (void)textController:(id)a0 removedTrackedAttribute:(id)a1;
- (void)textController:(id)a0 updatedTrackedAttribute:(id)a1;
- (void)attachmentPreferredSizeDidChange:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })characterRangeForBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clearCachedViewProvidersMatchingPredicate:(id /* block */)a0;
- (void)enumerateAttachmentViewsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (void)enumerateInlineAttachmentViewsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (id)existingAttachmentViewProviderForIdentifier:(id)a0;
- (void)invalidateLayoutForRanges:(id)a0;
- (unsigned long long)lineCountForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)noteEditorControllerSelectionDidChange:(id)a0;
- (id)paragraphStyleForCharacterIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForAttachment:(id)a0 withTextAttachment:(id *)a1;
- (void)reloadHashtags;
- (id)tableViewControllerForAttachment:(id)a0 createIfNeeded:(BOOL)a1;
- (id)todoButtonAtCharacterIndex:(unsigned long long)a0;
- (id)todoButtonForTrackedParagraph:(id)a0;
- (id)todoButtonsForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)trackedTodoParagraphAtIndex:(unsigned long long)a0;
- (id)trackedTodoParagraphForTrackingUUID:(id)a0;
- (void)updateExistingTodoViewProviderForTrackedParagraph:(id)a0;
- (void)updateParentForTableAttachmentViewController:(id)a0;
- (id)viewProviderForTextAttachment:(id)a0 parentView:(id)a1 location:(id)a2;
- (void)zoomFactorOrInsetsDidChange;

@end
