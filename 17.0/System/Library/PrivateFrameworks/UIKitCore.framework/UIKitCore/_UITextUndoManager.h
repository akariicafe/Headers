@class UITextInputController;

@interface _UITextUndoManager : NSUndoManager

@property (weak, nonatomic) UITextInputController *inputController;

- (BOOL)canRedo;
- (void)redo;
- (void)removeAllActions;
- (BOOL)canUndo;
- (void).cxx_destruct;
- (void)undo;

@end
