@interface TUReplyWithMessageStore : NSObject

- (id)init;
- (void)dealloc;
- (int)count;
- (id)_cannedRepliesForSending:(BOOL)a0;
- (id)_defaultRepliesForSending:(BOOL)a0;
- (void)_handleMessagesStoreChanged;
- (id)cannedReplies;
- (id)cannedRepliesForSending;
- (id)cannedReplyActionSheetOptions;
- (id)customReplies;
- (id)defaultReplies;
- (void)setCustomReply:(id)a0 atIndex:(unsigned long long)a1;

@end
