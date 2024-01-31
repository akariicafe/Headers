@class NSArray, DOCUndoManager, NSString;

@interface DOCSetTagsOperation : FPSetTagsOperation <DOCUndoableOperation>

@property (readonly, nonatomic) NSArray *oldTagsLists;
@property (readonly, nonatomic) NSArray *updatedTagsLists;
@property (readonly, nonatomic) DOCUndoManager *undoManager;
@property (readonly, nonatomic) NSString *actionNameForUndoing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)currentItems;
- (void)clearUndoStack;
- (id)currentTagsLists;
- (id)initWithItems:(id)a0 tagsLists:(id)a1 isUndoable:(BOOL)a2 shouldClearUndoStack:(BOOL)a3 undoManager:(id)a4;
- (id)itemIDsFromItems:(id)a0;
- (id)itemsFromItemIDs:(id)a0;
- (id)operationForRedoing;
- (id)operationForUndoing;
- (id)operationItemIDs;
- (void)registerUndo;
- (id)tagsListsFromItems:(id)a0;

@end
