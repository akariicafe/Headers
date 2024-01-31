@class NSArray;

@interface PXComposeRecipientSelectionSnapshot : NSObject

@property (readonly, copy, nonatomic) NSArray *selectedComposeRecipients;
@property (readonly, copy, nonatomic) NSArray *selectedRecipients;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSelectedComposeRecipients:(id)a0 selectedRecipients:(id)a1;

@end
