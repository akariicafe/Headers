@class WKContentView;

@interface WKQuirkyNSUndoManager : NSUndoManager

@property (readonly, weak) WKContentView *contentView;

- (BOOL)canRedo;
- (id)initWithContentView:(id)a0;
- (void)redo;
- (BOOL)canUndo;
- (void).cxx_destruct;
- (void)undo;

@end
