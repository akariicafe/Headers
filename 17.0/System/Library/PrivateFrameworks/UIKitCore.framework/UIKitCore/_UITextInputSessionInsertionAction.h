@interface _UITextInputSessionInsertionAction : _UITextInputSessionAction

@property (nonatomic) unsigned long long textLength;
@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long emojiCount;
@property (nonatomic) unsigned long long punctuationCount;
@property (nonatomic) unsigned long long withAlternativesCount;

- (id)description;
- (long long)inputActionCount;
- (BOOL)changedContent;
- (long long)mergeActionIfPossible:(id)a0;

@end
