@class NSData, EMMessageObjectID, NSString;

@interface EMOutgoingMessage : NSObject <EMOutgoingMessageBuilder, NSSecureCoding, EFPubliclyDescribable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *messageData;
@property (nonatomic) long long action;
@property (nonatomic) BOOL shouldSign;
@property (nonatomic) BOOL shouldEncrypt;
@property (nonatomic) long long conversationNotificationLevel;
@property (retain, nonatomic) EMMessageObjectID *originalMessageID;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBuilder:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithMessageData:(id)a0;

@end
