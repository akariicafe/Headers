@interface WebDefaultEditingDelegate : NSObject

+ (id)sharedEditingDelegate;

- (id)supportedPasteboardTypesForCurrentSelection;
- (id)documentFragmentForPasteboardItemAtIndex:(long long)a0;
- (id)undoManagerForWebView:(id)a0;
- (BOOL)webView:(id)a0 doCommandBySelector:(SEL)a1;
- (BOOL)webView:(id)a0 shouldApplyStyle:(id)a1 toElementsInDOMRange:(id)a2;
- (BOOL)webView:(id)a0 shouldBeginEditingInDOMRange:(id)a1;
- (BOOL)webView:(id)a0 shouldChangeSelectedDOMRange:(id)a1 toDOMRange:(id)a2 affinity:(unsigned long long)a3 stillSelecting:(BOOL)a4;
- (BOOL)webView:(id)a0 shouldChangeTypingStyle:(id)a1 toStyle:(id)a2;
- (BOOL)webView:(id)a0 shouldDeleteDOMRange:(id)a1;
- (BOOL)webView:(id)a0 shouldEndEditingInDOMRange:(id)a1;
- (BOOL)webView:(id)a0 shouldInsertNode:(id)a1 replacingDOMRange:(id)a2 givenAction:(long long)a3;
- (BOOL)webView:(id)a0 shouldInsertText:(id)a1 replacingDOMRange:(id)a2 givenAction:(long long)a3;
- (void)webViewDidBeginEditing:(id)a0;
- (void)webViewDidChange:(id)a0;
- (void)webViewDidChangeSelection:(id)a0;
- (void)webViewDidChangeTypingStyle:(id)a0;
- (void)webViewDidEndEditing:(id)a0;
- (BOOL)webView:(id)a0 shouldMoveRangeAfterDelete:(id)a1 replacingRange:(id)a2;

@end
