@class NSString;

@interface IMReplyContextDeletedMessageChatItem : IMReplyContextTextMessagePartChatItem <IMReplyContext>

@property (nonatomic) BOOL deletedMessageIsFromMe;
@property (readonly, nonatomic) BOOL replyIsFromMe;
@property (readonly, copy, nonatomic) NSString *replyMessageGUID;

@end
