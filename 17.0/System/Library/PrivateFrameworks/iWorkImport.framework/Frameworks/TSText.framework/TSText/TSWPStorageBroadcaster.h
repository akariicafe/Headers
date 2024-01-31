@class NSHashTable;

@interface TSWPStorageBroadcaster : NSObject {
    NSHashTable *_observers;
    NSHashTable *_paragraphObservers;
}

@property (readonly, nonatomic) unsigned long long observerCount;
@property (readonly, nonatomic) unsigned long long paragraphObserverCount;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)removeAllObservers;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)broadcastStorage:(id)a0 didChangeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 delta:(long long)a2 broadcastKind:(unsigned long long)a3;
- (void)addParagraphObserver:(id)a0;
- (void)broadcastStorage:(id)a0 didChangeParagraphsInIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)broadcastStorage:(id)a0 didChangeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 delta:(long long)a2 broadcastKind:(unsigned long long)a3 attributeKindChanges:(id)a4;
- (void)broadcastStorage:(id)a0 didDeleteParagraphsInIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)broadcastStorage:(id)a0 didInsertParagraphsInIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)removeParagraphObserver:(id)a0;

@end
