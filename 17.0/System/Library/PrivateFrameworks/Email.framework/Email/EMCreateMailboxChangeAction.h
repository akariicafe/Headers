@class NSString;

@interface EMCreateMailboxChangeAction : EMMailboxChangeAction

@property (readonly, copy, nonatomic) NSString *name;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithMailboxName:(id)a0 parentMailbox:(id)a1;
- (id)initWithMailboxName:(id)a0 parentMailboxID:(id)a1;

@end
