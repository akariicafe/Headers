@class NSString, NoteHTMLEditorView;

@interface NoteHTMLEditorViewScriptMessageHandler : NSObject <WKScriptMessageHandler>

@property (weak, nonatomic) NoteHTMLEditorView *noteHTMLEditorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (id)initWithNoteHMLEditorView:(id)a0;

@end
