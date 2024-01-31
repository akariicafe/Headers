@class CKVQueueNode;

@interface CKVQueue : NSObject {
    CKVQueueNode *_firstNode;
    CKVQueueNode *_lastNode;
}

- (id)init;
- (id)dequeue;
- (void)enqueue:(id)a0;
- (void).cxx_destruct;

@end
