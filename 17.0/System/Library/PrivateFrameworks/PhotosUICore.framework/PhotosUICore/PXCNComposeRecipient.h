@class CNComposeRecipient;

@interface PXCNComposeRecipient : PXRecipient

@property (readonly, nonatomic) CNComposeRecipient *recipient;

- (id)description;
- (void).cxx_destruct;
- (id)initWithContact:(id)a0 address:(id)a1 nameComponents:(id)a2 recipientKind:(long long)a3;
- (id)initWithRecipient:(id)a0;

@end
