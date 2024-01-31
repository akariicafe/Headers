@interface SXTextTangierEditingController : TSWPEditingController

@property (nonatomic) BOOL startingInitialSelectionDrag;

- (void)clearSelection;
- (BOOL)canAddOrShowComment;
- (int)canPerformEditorAction:(SEL)a0 withSender:(id)a1;
- (id)editingReps;
- (id)editorKeyboardLanguage;
- (BOOL)isParagraphModeWithSelection:(id)a0 onStorage:(id)a1;
- (void)tappedOnKnob:(id)a0;
- (BOOL)wantsCaret;
- (BOOL)wantsKeyboard;

@end
