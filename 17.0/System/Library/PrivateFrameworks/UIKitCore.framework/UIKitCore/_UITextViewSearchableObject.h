@class UITextView, NSString, UITextHighlightView, NSMutableSet, UITextSearchingDimmingView, UITextRange, UIImageView;
@protocol NSObject, NSCopying;

@interface _UITextViewSearchableObject : NSObject <UITextSearching> {
    NSMutableSet *_decoratedTextRanges;
    NSMutableSet *_decorationAttributes;
    UITextSearchingDimmingView *_dimmingView;
    UITextHighlightView *_highlightView;
    BOOL _dimmingViewVisible;
    BOOL _highlightViewVisible;
    UIImageView *_highlightContentsImageView;
    UITextRange *_highlightedTextRange;
    UITextRange *_visuallyHighlightedTextRange;
}

@property (readonly, weak, nonatomic) UITextView *textView;
@property (readonly) UITextRange *selectedTextRange;
@property (readonly, nonatomic) BOOL supportsTextReplacement;
@property (readonly) id<NSObject, NSCopying> selectedTextSearchDocument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)replaceFoundTextInRange:(id)a0 inDocument:(id)a1 withText:(id)a2;
- (void)_ensureSubviewOrder;
- (long long)compareFoundRange:(id)a0 toRange:(id)a1 inDocument:(id)a2;
- (void)clearAllDecoratedFoundText;
- (void)performTextSearchWithQueryString:(id)a0 usingOptions:(id)a1 resultAggregator:(id)a2;
- (void)scrollRangeToVisible:(id)a0 inDocument:(id)a1;
- (id)initWithTextView:(id)a0;
- (void).cxx_destruct;
- (void)decorateFoundTextRange:(id)a0 inDocument:(id)a1 usingStyle:(long long)a2;
- (BOOL)_usesTransientHighlightBehavior;
- (id)_activeFindSession;
- (void)_performTextSearchWithQueryString:(id)a0 usingOptions:(id)a1 resultHandler:(id /* block */)a2;
- (id)_rangeProvider;
- (void)_setDimmingViewVisible:(BOOL)a0;
- (void)_setHighlightViewVisible:(BOOL)a0;
- (id)_textLineRectsForRange:(id)a0;
- (void)_updateHighlightLabelForMatchedRange:(id)a0;
- (struct { BOOL x0; BOOL x1; })_wordTerminationCharacteristicsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)clearHighlightView;
- (void)didBeginFindSession;
- (void)didEndFindSession;
- (void)layoutManagedSubviews;
- (void)replaceAllOccurrencesOfQueryString:(id)a0 usingOptions:(id)a1 withText:(id)a2;
- (BOOL)shouldReplaceFoundTextInRange:(id)a0 inDocument:(id)a1 withText:(id)a2;
- (id)targetedPreviewForHighlightRange:(id)a0;
- (void)useSelectionForFind;
- (void)willHighlightFoundTextRange:(id)a0 inDocument:(id)a1;

@end
