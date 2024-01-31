@class _SCRCStackNode;

@interface SCRCStackQueue : NSObject {
    _SCRCStackNode *_firstNode;
    _SCRCStackNode *_lastNode;
    unsigned long long _count;
}

- (id)objectEnumerator;
- (void)dealloc;
- (void)removeAllObjects;
- (void)enqueueObject:(id)a0;
- (unsigned long long)count;
- (id)description;
- (void).cxx_destruct;
- (id)dequeueObject;
- (BOOL)isEmpty;
- (id)popObject;
- (void)pushObject:(id)a0;
- (id)topObject;
- (void)_safeReleaseAllObjects;
- (id)dequeueObjectRetained;
- (id)popObjectRetained;
- (void)pushArray:(id)a0;

@end
