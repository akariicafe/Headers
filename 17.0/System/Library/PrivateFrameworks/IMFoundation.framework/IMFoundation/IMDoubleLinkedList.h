@class IMDoubleLinkedListNode;

@interface IMDoubleLinkedList : NSObject

@property (retain) IMDoubleLinkedListNode *first;
@property (retain) IMDoubleLinkedListNode *last;
@property (readonly) unsigned long long count;

- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (BOOL)containsObject:(id)a0;
- (id)allObjects;
- (void).cxx_destruct;
- (void)appendObject:(id)a0;
- (void)appendLinkedListNode:(id)a0;
- (void)pushLinkedListNode:(id)a0;
- (void)removeLinkedListNode:(id)a0;
- (id)popObject;
- (void)pushObject:(id)a0;

@end
