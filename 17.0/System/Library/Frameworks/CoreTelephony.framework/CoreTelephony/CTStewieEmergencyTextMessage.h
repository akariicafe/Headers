@class NSString;

@interface CTStewieEmergencyTextMessage : NSObject <CTStewieMessageIncoming, CTStewieMessageOutgoing>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long conversationID;
@property (nonatomic) long long sequenceNum;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) long long incomingTextNotifyOption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)maxLengthInBytesForOutgoingText;
+ (long long)maxLengthInBytesForIncomingText;
+ (double)estimatedSendTimeForEmergencyText:(id)a0;
+ (long long)maxSequenceNum;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)estimatedSendTime;
- (id)initIncomingTextMessageWithConversationID:(long long)a0 sequenceNum:(long long)a1 emergencyText:(id)a2 notifyOption:(long long)a3 error:(id *)a4;
- (id)initWithConversationID:(long long)a0 sequenceNum:(long long)a1 emergencyText:(id)a2 error:(id *)a3;
- (id)initWithConversationIDInternal:(long long)a0 sequenceNum:(long long)a1 emergencyText:(id)a2 maxTextLength:(unsigned long long)a3 error:(id *)a4;
- (BOOL)isEqualToEmergencyTextMessage:(id)a0;

@end
