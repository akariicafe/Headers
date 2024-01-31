@class NSArray;

@interface EMMessageDeleteAllAction : EMMessageChangeAction

@property (readonly, copy, nonatomic) NSArray *mailboxObjectIDs;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (long long)signpostType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithMailboxes:(id)a0 origin:(long long)a1 actor:(long long)a2 messageListItemsToExclude:(id)a3;

@end
