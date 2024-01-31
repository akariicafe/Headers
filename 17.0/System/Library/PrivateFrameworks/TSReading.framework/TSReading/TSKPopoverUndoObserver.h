@class NSUndoManager, NSMutableSet;

@interface TSKPopoverUndoObserver : NSObject {
    NSMutableSet *mPopoverBasedViewControllers;
    NSMutableSet *mPopoverControllers;
}

@property (retain, nonatomic) NSUndoManager *observedUndoManager;

+ (id)sharedObserver;

- (id)init;
- (void)dealloc;
- (void)addPopoverBasedViewController:(id)a0;
- (void)addPopoverController:(id)a0;
- (void)removePopoverBasedViewController:(id)a0;
- (void)removePopoverController:(id)a0;
- (void)undoManagerWillRedo:(id)a0;
- (void)undoManagerWillUndo:(id)a0;

@end
