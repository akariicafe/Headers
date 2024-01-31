@class IATextInputActionsSessionSelectionAction, IATextInputActionsSessionUndoAction, IATextInputActionsSessionDictationBeganAction, IATextInputActionsSessionRedoAction, IATextInputActionsSessionEndAction, IATextInputActionsSessionBeganAction, IATextInputActionsSessionDeletionAction, IATextInputActionsSessionReplaceTextAction, IATextInputActionsSessionInsertionAction, NSString, IATextInputActionsSessionCopyAction, IATextInputActionsSessionPasteAction, IATextInputActionsSessionDictationEndedAction, IATextInputActionsSessionCutAction;

@interface IATextInputActionsSessionAction : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } relativeRangeBefore;
@property (readonly, nonatomic) BOOL changedContent;
@property (nonatomic) long long source;
@property (nonatomic) long long textInputActionsType;
@property (readonly, nonatomic) long long inputActionCount;
@property (nonatomic) long long inputActionCountFromMergedActions;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSString *keyboardVariant;
@property (copy, nonatomic) NSString *keyboardLayout;
@property (copy, nonatomic) NSString *keyboardType;
@property (copy, nonatomic) NSString *appBundleId;
@property (nonatomic) long long flagOptions;
@property (readonly, nonatomic) IATextInputActionsSessionBeganAction *asBegan;
@property (readonly, nonatomic) IATextInputActionsSessionEndAction *asEnd;
@property (readonly, nonatomic) IATextInputActionsSessionInsertionAction *asInsertion;
@property (readonly, nonatomic) IATextInputActionsSessionDeletionAction *asDeletion;
@property (readonly, nonatomic) IATextInputActionsSessionSelectionAction *asSelection;
@property (readonly, nonatomic) IATextInputActionsSessionCopyAction *asCopy;
@property (readonly, nonatomic) IATextInputActionsSessionCutAction *asCut;
@property (readonly, nonatomic) IATextInputActionsSessionPasteAction *asPaste;
@property (readonly, nonatomic) IATextInputActionsSessionUndoAction *asUndo;
@property (readonly, nonatomic) IATextInputActionsSessionRedoAction *asRedo;
@property (readonly, nonatomic) IATextInputActionsSessionDictationBeganAction *asDictationBegan;
@property (readonly, nonatomic) IATextInputActionsSessionDictationEndedAction *asDictationEnded;
@property (readonly, nonatomic) IATextInputActionsSessionReplaceTextAction *asReplaceText;

- (id)description;
- (void).cxx_destruct;
- (id)inputModeUniqueString;
- (BOOL)isMergeableWith:(id)a0;
- (long long)mergeActionIfPossible:(id)a0;

@end
