@class NSMutableDictionary;

@interface ICOrderedMediaSet : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } mediaLock;
@property (retain, nonatomic) NSMutableDictionary *mediaItems;

- (void)dealloc;
- (void)removeAllItems;
- (id)initWithTypes:(id)a0;
- (void)addMediaItemToIndex:(id)a0;
- (id)arrayForType:(id)a0;
- (unsigned long long)mediaItemCount;
- (id)mediaItemWithHandle:(unsigned long long)a0 inTypes:(id)a1;
- (id)orderedSetForType:(id)a0;
- (void)performSelector:(id)a0 onTypes:(id)a1;
- (BOOL)removeMediaItemFromIndex:(id)a0;
- (BOOL)removeMediaItemWithHandleFromIndex:(unsigned long long)a0;
- (BOOL)removeMediaItemsFromIndex:(id)a0;

@end
