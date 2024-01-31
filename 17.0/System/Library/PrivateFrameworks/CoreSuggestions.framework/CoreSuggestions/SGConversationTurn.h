@class NSString, NSDate;

@interface SGConversationTurn : NSObject <NSSecureCoding, NSCopying, SGConversationTurnProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *senderID;
@property (readonly, nonatomic) NSDate *timestamp;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithText:(id)a0 senderID:(id)a1 timestamp:(id)a2;
- (BOOL)isEqualToConversationTurn:(id)a0;

@end
