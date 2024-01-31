@class NSMutableArray, NSMutableDictionary;

@interface BRNotificationQueue : NSObject <NSFastEnumeration> {
    NSMutableArray *_array;
    NSMutableArray *_callbacks;
    NSMutableDictionary *_index;
    unsigned long long _dequeued;
    unsigned long long _dequeuedNotificationCount;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (void)removeAllObjects;
- (void)processDequeueCallbacks;
- (void)addNotification:(id)a0 asDead:(BOOL)a1;
- (id)description;
- (void)dequeue:(unsigned long long)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)_filterIndex:(id)a0;
- (void)addDequeueCallback:(id /* block */)a0;

@end
