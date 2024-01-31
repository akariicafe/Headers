@class NSString, NSDictionary, NSDate;

@interface HDIDSMessagePersistentContext : NSObject <NSSecureCoding> {
    BOOL _fromRequest;
    unsigned short _messageID;
    NSString *_idsIdentifier;
    NSString *_deviceIdentifier;
    NSDictionary *_userInfo;
    NSDate *_date;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
