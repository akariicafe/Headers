@class SBRootFolder, SBHIconManager;
@protocol SBHUndoObserving;

@interface SBHIconManagerUndoPreparation : NSObject <SBHUndoPreparation>

@property (readonly, weak, nonatomic) SBHIconManager *iconManager;
@property (readonly, weak, nonatomic) SBRootFolder *originalRootFolder;
@property (readonly, copy, nonatomic) SBRootFolder *unmodifiedOriginalRootFolder;
@property (weak, nonatomic) id<SBHUndoObserving> observer;

- (void).cxx_destruct;
- (id)initWithIconManager:(id)a0;
- (void)registerWithUndoManager:(id)a0 actionName:(id)a1 observer:(id)a2;

@end
