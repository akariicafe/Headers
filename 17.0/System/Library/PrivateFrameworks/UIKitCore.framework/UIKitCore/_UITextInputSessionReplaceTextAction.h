@interface _UITextInputSessionReplaceTextAction : _UITextInputSessionAction

@property (nonatomic) unsigned long long removedTextLength;
@property (nonatomic) unsigned long long insertedTextLength;
@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long removedEmojiCount;
@property (nonatomic) unsigned long long insertedEmojiCount;
@property (nonatomic) unsigned long long removedPunctuationCount;
@property (nonatomic) unsigned long long insertedPunctuationCount;

- (id)description;
- (BOOL)changedContent;
- (long long)mergeActionIfPossible:(id)a0;

@end
