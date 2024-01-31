@interface DOCUndoManager : NSUndoManager

@property (class, readonly) DOCUndoManager *shared;

@property (nonatomic) BOOL shouldRemoveAllActions;

- (id)init;
- (void)dealloc;
- (void)registerUndoOperationForSender:(id)a0;
- (void)didPerformUndoableOperation;
- (BOOL)isActionOperation:(id)a0;
- (BOOL)processSupportsUndoingActions;
- (void)startUndoNotificationsObservation;
- (void)stopUndoNotificationsObservation;

@end
