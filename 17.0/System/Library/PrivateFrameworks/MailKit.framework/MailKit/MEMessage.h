@class NSDate, NSString, NSArray, NSData, NSDictionary, MEEmailAddress, MEMessageRecipients, MEMessageSenderMetadata;

@interface MEMessage : NSObject <NSCopying, EFPubliclyDescribable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MEMessageRecipients *recipients;
@property (retain, nonatomic) MEMessageSenderMetadata *senderMetadata;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long encryptionState;
@property (readonly, copy, nonatomic) NSString *subject;
@property (readonly, copy, nonatomic) MEEmailAddress *fromAddress;
@property (readonly, copy, nonatomic) NSArray *toAddresses;
@property (readonly, copy, nonatomic) NSArray *ccAddresses;
@property (readonly, copy, nonatomic) NSArray *bccAddresses;
@property (readonly, copy, nonatomic) NSArray *replyToAddresses;
@property (readonly, copy, nonatomic) NSArray *allRecipientAddresses;
@property (readonly, copy, nonatomic) NSDate *dateSent;
@property (readonly, copy, nonatomic) NSDate *dateReceived;
@property (readonly, copy, nonatomic) NSDictionary *headers;
@property (readonly, copy, nonatomic) NSData *rawData;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_protectedHeaders;
+ (BOOL)extensionCanSetHeaderKey:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_sanitaizedHeadersForHeaders:(id)a0;
- (id)initWithState:(long long)a0 encryptionState:(long long)a1 subject:(id)a2 recipients:(id)a3 from:(id)a4 dataSent:(id)a5 dateReceived:(id)a6 headers:(id)a7 rawData:(id)a8 senderMetadata:(id)a9;

@end
