@interface CKMessageActionChatItem : CKMultilineStampLabelChatItem

- (id)sender;
- (long long)actionType;
- (id)handle;
- (id)loadTranscriptText;

@end
