@interface CKMessageReplyCountChatItem : CKMessageStatusChatItem

@property (readonly, nonatomic) unsigned long long replyCount;

- (long long)buttonType;
- (unsigned long long)layoutType;
- (Class)cellClass;
- (id)_loadTranscriptButtonTextForReplyCountButtonType;
- (id)loadTranscriptButtonText;
- (BOOL)shouldHideDuringDarkFSM;
- (char)transcriptOrientation;

@end
