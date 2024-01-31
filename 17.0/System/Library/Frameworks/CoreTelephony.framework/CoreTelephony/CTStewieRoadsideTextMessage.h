@class NSString;

@interface CTStewieRoadsideTextMessage : NSObject <CTStewieMessageIncoming, CTStewieMessageOutgoing>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long conversationID;
@property (nonatomic) long long providerId;
@property (nonatomic) long long sequenceNum;
@property (retain, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)maxLengthInBytesForOutgoingText;
+ (long long)maxLengthInBytesForIncomingText;
+ (double)estimatedSendTimeForRoadsideText:(id)a0;
+ (long long)maxSequenceNum;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)estimatedSendTime;
- (id)initIncomingTextMessageWithConversationID:(long long)a0 providerId:(long long)a1 sequenceNum:(long long)a2 text:(id)a3 error:(id *)a4;
- (id)initWithConversationID:(long long)a0 providerId:(long long)a1 sequenceNum:(long long)a2 text:(id)a3 error:(id *)a4;
- (id)initWithConversationIDInternal:(long long)a0 providerId:(long long)a1 sequenceNum:(long long)a2 text:(id)a3 maxTextLength:(unsigned long long)a4 error:(id *)a5;
- (BOOL)isEqualToRoadsideTextMessage:(id)a0;

@end
