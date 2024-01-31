@class NSString;

@interface EDMailboxAction : NSObject

@property (readonly, nonatomic) long long actionID;
@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) long long mailboxID;
@property (readonly, copy, nonatomic) NSString *mailboxName;
@property (readonly, copy, nonatomic) NSString *renamedMailboxName;

+ (id)actionWithID:(long long)a0 toCreateMailbox:(long long)a1 mailboxName:(id)a2;
+ (id)actionWithID:(long long)a0 toDeleteMailbox:(long long)a1 mailboxName:(id)a2;
+ (id)actionWithID:(long long)a0 toRenameMailbox:(long long)a1 mailboxName:(id)a2 toName:(id)a3;

- (void).cxx_destruct;
- (id)initWithID:(long long)a0 actionType:(long long)a1 mailboxID:(long long)a2 mailboxName:(id)a3 renamedMailboxName:(id)a4;

@end
