@interface MSParsecSearchIndexState : NSObject

@property (readonly) long long indexType;
@property (readonly) long long percentMessagesIndexed;
@property (readonly) long long percentAttachmentsIndexed;
@property (readonly) long long totalMessageCount;
@property (readonly) long long indexedMessageCount;

+ (id)indexStateForMessagesIndexed:(id)a0 indexableMessages:(id)a1 attachmentsIndexed:(id)a2 indexableAttachments:(id)a3;

- (id)description;
- (id)initWithPercentMessagesIndexed:(long long)a0 percentAttachmentsIndexed:(long long)a1 totalMessageCount:(long long)a2 indexedMessageCount:(long long)a3 indexType:(long long)a4;

@end
