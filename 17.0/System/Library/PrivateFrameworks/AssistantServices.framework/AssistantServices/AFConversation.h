@class NSUUID, NSString, NSMutableDictionary, AFTreeNode;
@protocol AFConversationDelegate, AFConversationStorable;

@interface AFConversation : NSObject {
    NSMutableDictionary *_additionalInterpretationsForRefId;
    NSMutableDictionary *_updatedUserUtteranceForRefId;
}

@property (retain, nonatomic, getter=_rootNode, setter=_setRootNode:) AFTreeNode *rootNode;
@property (retain, nonatomic, setter=_setLastRestoredItem:) id<AFConversationStorable> lastRestoredItem;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *languageCode;
@property (nonatomic, getter=isSynchronizedWithServer) BOOL synchronizedWithServer;
@property (weak, nonatomic) id<AFConversationDelegate> delegate;

- (id)initWithPropertyListRepresentation:(id)a0;
- (id)itemWithIdentifier:(id)a0;
- (id)lastItem;
- (id)propertyListRepresentation;
- (id)itemAtIndexPath:(id)a0;
- (id)initWithLanguageCode:(id)a0;
- (void).cxx_destruct;
- (void)_enumerateItemsUsingBlock:(id /* block */)a0;
- (id)_itemAtIndexPath:(id)a0;
- (void)addItemForPartialResultCommand:(id)a0;
- (id)indexPathForItemWithIdentifier:(id)a0;
- (void)_addItemsForAceObjects:(id)a0 type:(long long)a1 aceCommandIdentifier:(id)a2 dialogPhase:(id)a3 asChildrenOfItemWithIdentifier:(id)a4;
- (void)_addItemsForAceViews:(id)a0 withDialogPhase:(id)a1 fromCommandWithIdentifier:(id)a2 asChildrenOfItemWithIdentifier:(id)a3;
- (void)_addItemsForAceViews:(id)a0 withDialogPhase:(id)a1 fromCommandWithIdentifier:(id)a2 asChildrenOfItemWithIdentifier:(id)a3 isSupplemental:(BOOL)a4 isImmersiveExperience:(BOOL)a5;
- (void)_addItemsForAceViews:(id)a0 withDialogPhase:(id)a1 fromCommandWithIdentifier:(id)a2 atIndexPaths:(id)a3;
- (void)_addItemsForAceViews:(id)a0 withDialogPhase:(id)a1 fromCommandWithIdentifier:(id)a2 atIndexPaths:(id)a3 isSupplemental:(BOOL)a4 isImmersiveExperience:(BOOL)a5;
- (id)_changePresentationStateForNodes:(id)a0;
- (id)_childOfNode:(id)a0 withItemWhichCanBeUpdatedWithAceObject:(id)a1 inDialogPhase:(id)a2;
- (id)_indexPathForItemWithIdentifier:(id)a0 ignoreNonExistent:(BOOL)a1;
- (id)_indexPathsForAddingItemsWithCount:(long long)a0 asChildrenOfItemWithIdentifier:(id)a1;
- (id)_nodeAtIndexPath:(id)a0;
- (BOOL)_nodeContainsProvisionalItems:(id)a0;
- (void)_processInsertions:(id)a0 inDialogPhase:(id)a1;
- (void)_removeNodes:(id)a0;
- (id)aceCommandIdentifierForItemAtIndexPath:(id)a0;
- (id)aceObjectForItemAtIndexPath:(id)a0;
- (void)addAdditionalSpeechInterpretation:(id)a0 refId:(id)a1;
- (void)addItemForMusicStartSessionCommand:(id)a0;
- (void)addItemForSpeechRecognizedCommand:(id)a0;
- (void)addItemsForAceObjects:(id)a0 type:(long long)a1 dialogPhase:(id)a2 asChildrenOfItemWithIdentifier:(id)a3;
- (void)addItemsForAceViews:(id)a0 withDialogPhase:(id)a1 asChildrenOfItemWithIdentifier:(id)a2;
- (void)addItemsForAddViewsCommand:(id)a0;
- (void)addItemsForShowHelpCommand:(id)a0;
- (void)addRecognitionUpdateWithPhrases:(id)a0 utterances:(id)a1 refId:(id)a2;
- (void)addSelectionResponse:(id)a0;
- (id)additionalSpeechInterpretationsForRefId:(id)a0;
- (void)cancelItemWithIdentifier:(id)a0;
- (BOOL)containsItemForAceViewWithIdentifier:(id)a0;
- (BOOL)containsItemWithIdentifier:(id)a0;
- (id)dialogPhaseForItemAtIndexPath:(id)a0;
- (BOOL)hasItemWithIdentifier:(id)a0;
- (id)identifierOfItemAtIndexPath:(id)a0;
- (id)initWithIdentifier:(id)a0 languageCode:(id)a1;
- (id)initWithIdentifier:(id)a0 languageCode:(id)a1 rootNode:(id)a2;
- (void)insertItemsForAceViews:(id)a0 withDialogPhase:(id)a1 atIndexPaths:(id)a2;
- (BOOL)itemAtIndexPathIsVirgin:(id)a0;
- (void)notifyDelegateOfUpdates:(id)a0 inserts:(id)a1 presentationChanges:(id)a2;
- (long long)numberOfChildrenForItemAtIndexPath:(id)a0;
- (long long)numberOfChildrenForItemWithIdentifier:(id)a0;
- (id)parentOfItemWithIdentifier:(id)a0;
- (long long)presentationStateForItemAtIndexPath:(id)a0;
- (void)removeItemsAtIndexPaths:(id)a0;
- (void)removeItemsFollowingItemAtIndexPath:(id)a0;
- (void)removeItemsWithIdentifiers:(id)a0;
- (void)removeTransientItems;
- (long long)typeForItemAtIndexPath:(id)a0;
- (void)updateWithUpdateViewsCommand:(id)a0;
- (id)updatedUserUtteranceForRefId:(id)a0;

@end
