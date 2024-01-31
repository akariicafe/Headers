@class ASEmailItem;

@interface ASMailMessage : DAMailMessage {
    ASEmailItem *_ASEmailItem;
}

+ (BOOL)supportsSecureCoding;

- (id)preview;
- (BOOL)isDraft;
- (id)subject;
- (id)sender;
- (id)body;
- (id)attachments;
- (void)encodeWithCoder:(id)a0;
- (BOOL)read;
- (id)description;
- (id)date;
- (int)importance;
- (void).cxx_destruct;
- (id)messageClass;
- (id)initWithCoder:(id)a0;
- (id)folderID;
- (id)conversationId;
- (id)bcc;
- (id)replyTo;
- (id)cc;
- (id)from;
- (id)to;
- (BOOL)flagged;
- (int)bodySize;
- (BOOL)flaggedIsSet;
- (int)lastVerb;
- (id)longID;
- (BOOL)meetingRequestIsActionable;
- (id)meetingRequestMetaData;
- (id)meetingRequestUUID;
- (BOOL)readIsSet;
- (id)remoteID;
- (id)rfc822Data;
- (int)smimeType;
- (BOOL)verbIsSet;
- (int)bodyTruncated;
- (id)conversationIndex;
- (id)displayTo;
- (id)threadTopic;
- (id)initWithASEmailItem:(id)a0;

@end
