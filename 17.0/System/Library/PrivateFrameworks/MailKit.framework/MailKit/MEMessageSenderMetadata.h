@class NSString;

@interface MEMessageSenderMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *senderEmailAddress;
@property (readonly) BOOL isVIP;
@property (readonly) BOOL isContact;
@property (readonly) BOOL isUnsubscribeHeaderPresent;
@property (readonly) BOOL isPrimarySender;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSenderEmailAddress:(id)a0 isVIP:(BOOL)a1 isContact:(BOOL)a2 isUnsubscribeHeaderPresent:(BOOL)a3 isPrimarySender:(BOOL)a4;

@end
