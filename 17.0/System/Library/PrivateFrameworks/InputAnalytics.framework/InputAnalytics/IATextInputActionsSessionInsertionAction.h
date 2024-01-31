@interface IATextInputActionsSessionInsertionAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long textLength;
@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long emojiCount;

- (id)description;
- (long long)inputActionCount;
- (BOOL)changedContent;
- (long long)mergeActionIfPossible:(id)a0;

@end
