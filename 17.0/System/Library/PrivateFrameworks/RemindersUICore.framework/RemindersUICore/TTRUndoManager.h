@class NSString;

@interface TTRUndoManager : NSUndoManager

@property (copy, nonatomic) NSString *debugIdentifier;
@property (retain, nonatomic) NSString *pendingActionName;
@property (nonatomic) BOOL disableRemoveAllActions;
@property (readonly, nonatomic) NSString *debug_undoStackDescription;
@property (readonly, nonatomic) NSString *debug_redoStackDescription;

+ (void)withActionName:(id)a0 undoManager:(id)a1 block:(id /* block */)a2;

- (void)removeAllActions;
- (id)description;
- (void).cxx_destruct;
- (void)registerUndoWithTarget:(id)a0 handler:(id /* block */)a1;
- (void)registerUndoWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (void)_consumePendingActionName;
- (void)_registerLogUserAction:(id)a0;
- (id)initWithDebugIdentifier:(id)a0;

@end
