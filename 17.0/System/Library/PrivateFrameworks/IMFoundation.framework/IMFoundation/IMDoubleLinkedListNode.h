@interface IMDoubleLinkedListNode : NSObject

@property (retain) IMDoubleLinkedListNode *prev;
@property (retain) IMDoubleLinkedListNode *next;
@property (retain) id object;

- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (void)orphan;
- (void)removeFromList;

@end
