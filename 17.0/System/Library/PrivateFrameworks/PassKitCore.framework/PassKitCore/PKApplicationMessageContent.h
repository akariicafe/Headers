@class PKApplicationMessageGroupDescriptor, PKApplicationMessageAction, PKApplicationMessageContentDefault;

@interface PKApplicationMessageContent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKApplicationMessageContentDefault *contentTypeDefault;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) PKApplicationMessageGroupDescriptor *group;
@property (readonly, nonatomic) PKApplicationMessageAction *action;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
