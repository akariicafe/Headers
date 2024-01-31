@class EMFollowUp;

@interface EMMessageFollowUpAction : EMMessageChangeAction

@property (readonly, nonatomic) EMFollowUp *followUp;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (long long)signpostType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithMessageListItems:(id)a0 origin:(long long)a1 actor:(long long)a2 followUp:(id)a3;

@end
