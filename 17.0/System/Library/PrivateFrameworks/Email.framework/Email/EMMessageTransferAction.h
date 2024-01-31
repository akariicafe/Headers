@class NSURL, ECMessageFlagChange;

@interface EMMessageTransferAction : EMMessageChangeAction

@property (readonly, nonatomic) NSURL *destinationMailboxURL;
@property (readonly, nonatomic) long long specialDestinationMailboxType;
@property (readonly, nonatomic) ECMessageFlagChange *flagChange;
@property (readonly, nonatomic) BOOL copyMessages;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (long long)signpostType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithMessageListItems:(id)a0 origin:(long long)a1 actor:(long long)a2 specialDestinationMailboxType:(long long)a3 flagChange:(id)a4 copyMessages:(BOOL)a5;
- (id)initWithMessageListItems:(id)a0 origin:(long long)a1 actor:(long long)a2 destinationMailbox:(id)a3 copyMessages:(BOOL)a4;
- (id)initWithObjectIDs:(id)a0 origin:(long long)a1 actor:(long long)a2 specialDestinationMailboxType:(long long)a3 flagChange:(id)a4 copyMessages:(BOOL)a5;

@end
