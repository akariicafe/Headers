@class NSNumber;

@interface CTCARoadsideConversationState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *conversationId;
@property (nonatomic) BOOL committed;
@property (retain, nonatomic) NSNumber *providerId;
@property (nonatomic) long long fromService;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
