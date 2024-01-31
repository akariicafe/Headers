@class NSMutableDictionary, NSString, CUIKUndoableEditor, NSError;
@protocol CUIKCommitDelegate, CUIKDecisionDelegate;

@interface CUIKUndoManager : NSUndoManager <CUIKUndoDelegate>

@property (retain, nonatomic) NSMutableDictionary *undeletedObjectMap;
@property (retain, nonatomic) NSMutableDictionary *specificIdentifierMapForUndo;
@property (retain, nonatomic) NSMutableDictionary *specificIdentifierMapForRevert;
@property (retain, nonatomic) id<CUIKCommitDelegate> commitDelegate;
@property (retain, nonatomic) id<CUIKDecisionDelegate> decisionDelegate;
@property (copy, nonatomic) id /* block */ editingManagerProvider;
@property (retain, nonatomic) CUIKUndoableEditor *undoableEditor;
@property (retain, nonatomic) NSError *lastError;
@property BOOL disableUndoForOrganizerScheduling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operationForAction:(unsigned long long)a0 context:(id)a1;

- (void)objectWithSpecificIdentifierWasReverted:(id)a0;
- (void)undoOperation:(id)a0;
- (id)init;
- (id)objectToSaveForRevertingChangeToObject:(id)a0;
- (void)removeAllActions;
- (void)_clearUndeletedObjects;
- (id)objectToSaveForUndoingChangeToObject:(id)a0;
- (void).cxx_destruct;
- (void)_registerUndeletedObject:(id)a0 withOriginalObjectID:(id)a1;
- (void)clearUndoOperations;
- (void)setRevertObject:(id)a0 forSpecificIdentifier:(id)a1;
- (void)handleUndoForOperation:(id)a0;
- (void)setUndoObject:(id)a0 forSpecificIdentifier:(id)a1;

@end
