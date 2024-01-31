@class NSMutableSet;

@interface _UITextInteractableItemCache : NSObject

@property (retain, nonatomic) NSMutableSet *attachmentItems;
@property (retain, nonatomic) NSMutableSet *linkItems;
@property (retain, nonatomic) NSMutableSet *tagItems;

- (id)init;
- (void)removeItem:(id)a0;
- (void)addItem:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_cachedItemInSet:(id)a0 predicate:(id /* block */)a1;
- (id)itemForAttachment:(id)a0 range:(id)a1;
- (id)itemForLink:(id)a0 range:(id)a1;
- (id)itemForTag:(id)a0 range:(id)a1;

@end
