@class NSArray;

@interface EMMessageTransferAllAction : EMMessageTransferAction

@property (readonly, copy, nonatomic) NSArray *mailboxObjectIDs;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (long long)signpostType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithMailboxes:(id)a0 messageListItemsToExclude:(id)a1 destinationMailbox:(id)a2 copyMessages:(BOOL)a3 origin:(long long)a4 actor:(long long)a5;
- (id)initWithMailboxes:(id)a0 messageListItemsToExclude:(id)a1 specialDestinationMailboxType:(long long)a2 flagChange:(id)a3 copyMessages:(BOOL)a4 origin:(long long)a5 actor:(long long)a6;

@end
