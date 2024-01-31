@class NSString;

@interface AMSDoubleLinkedListNode : NSObject

@property (retain, nonatomic) NSString *listIdentifier;
@property (weak, nonatomic) AMSDoubleLinkedListNode *previous;
@property (retain, nonatomic) id object;
@property (retain, nonatomic) AMSDoubleLinkedListNode *next;

- (id)initWithObject:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
