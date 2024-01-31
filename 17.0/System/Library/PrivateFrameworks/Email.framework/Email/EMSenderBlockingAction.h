@interface EMSenderBlockingAction : EMMessageChangeAction

@property (readonly, nonatomic) BOOL blockSender;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (long long)signpostType;
- (id)initWithCoder:(id)a0;
- (id)initWithMessageListItems:(id)a0 origin:(long long)a1 actor:(long long)a2 blockSender:(BOOL)a3;

@end
