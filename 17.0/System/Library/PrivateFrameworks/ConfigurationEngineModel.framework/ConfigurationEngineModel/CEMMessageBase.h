@class NSString, CEMAnyPayload, NSDate;

@interface CEMMessageBase : CEMPayloadBase

@property (copy, nonatomic) NSString *messageType;
@property (copy, nonatomic) NSString *messageIdentifier;
@property (copy, nonatomic) NSString *messageInReplyTo;
@property (copy, nonatomic) NSDate *messageTimestamp;
@property (copy, nonatomic) CEMAnyPayload *messagePayload;

+ (id)messageForData:(id)a0 error:(id *)a1;
+ (id)messageForPayload:(id)a0 error:(id *)a1;

- (id)serialize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializeAsDataWithError:(id *)a0;
- (BOOL)loadMessageFromDictionary:(id)a0 error:(id *)a1;

@end
