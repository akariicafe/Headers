@class AXElement, NSString, SRCSTextEditing, CACSpokenCommand;

@interface CACTextEditingProvider : NSObject <SRCSTextEditingProviderProtocol> {
    CACSpokenCommand *_spokenCommand;
    AXElement *_axElement;
}

@property (readonly) SRCSTextEditing *textEditingEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setExecuting:(BOOL)a0;
- (void).cxx_destruct;
- (void)deleteText;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)markerRangeForLineAtTextMarker:(id)a0;
- (void)performTextCopy;
- (void)performTextUndo;
- (void)performTextRedo;
- (Class)textMarkerClass;
- (id)_nBestListFromPreviousTextInsertionForAXElement:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeFromPreviousTextInsertionForAXElement:(id)a0;
- (id)actOnStrings:(id)a0 ambiguityResolution:(id)a1 substringSearchGranularity:(int)a2 alwaysCallActionOnClosestMatch:(BOOL)a3 options:(id)a4 actionBlock:(id /* block */)a5;
- (void)applyFormat;
- (void)deleteTextAtTextMarkerRange:(id)a0;
- (id)emojisMatchingTextInStrings:(id)a0;
- (id)firstPositionTextMarker;
- (void)formatSelectionBold;
- (void)formatSelectionItalics;
- (void)formatSelectionUnderline;
- (void)handleCorrectionRequestWithStrings:(id)a0;
- (void)handleErrorIdentifier:(id)a0 withObjects:(id)a1;
- (void)handleSearchResultsWithRecognizedCommandParameters:(id)a0 variantOverrides:(id)a1;
- (void)handleTextDisambiguationWithPhraseMatchResults:(id)a0 actionBlock:(id /* block */)a1;
- (id)initWithSpokenCommand:(id)a0 axElement:(id)a1;
- (void)insertAttributedString:(id)a0;
- (void)insertString:(id)a0;
- (BOOL)isNextPreviousResolverSpokenCommandEmojiBased;
- (BOOL)isTextDisambiguationSupported;
- (BOOL)isVisibleTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isVisibleTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)lastPositionTextMarker;
- (unsigned long long)lengthFromMarker:(id)a0 toMarker:(id)a1;
- (BOOL)marker:(id)a0 precedesMarker:(id)a1;
- (BOOL)marker:(id)a0 precedesOrEqualsMarker:(id)a1;
- (id)markerRangeForEnumerationType:(long long)a0 desiredBlock:(int)a1 count:(unsigned long long)a2 options:(int)a3;
- (id)nBestListFromPreviousTextInsertion;
- (void)performTextCut;
- (void)performTextPaste;
- (void)performTextSelectAll;
- (void)registerInsertedStringCategoryIdentifer:(id)a0;
- (int)searchGranularity;
- (id)selectionTextMarkerRange;
- (void)setCompletionDeterminedManually:(BOOL)a0;
- (void)setSelectionToTextMarkerRange:(id)a0;
- (BOOL)shouldInsertInterWordSpaces;
- (int)statusOfEmojisFoundInString:(id)a0;
- (id)stringForTextMarkerRange:(id)a0;
- (Class)textMarkerRangeClass;
- (id)textMarkerRangeFromPreviousTextInsertion;

@end
