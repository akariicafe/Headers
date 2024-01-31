@class _NSUndoObject;

@interface _NSUndoStack : NSObject {
    unsigned long long _max;
    unsigned long long _count;
    unsigned long long _nestingLevel;
    _NSUndoObject *_head;
}

- (void)push:(id)a0;
- (id)groupIdentifier;
- (id)topUndoObject;
- (id)init;
- (void)dealloc;
- (void)markEnd;
- (void)removeAllObjects;
- (void)setGroupIdentifier:(id)a0;
- (void)_removeBottom;
- (unsigned long long)count;
- (void)setDiscardable:(BOOL)a0;
- (BOOL)popAndInvoke;
- (id)description;
- (id)popUndoObject;
- (unsigned long long)max;
- (void)removeAllObjectsWithTarget:(id)a0;
- (void)removeObject:(id)a0;
- (unsigned long long)nestingLevel;
- (void)setMax:(unsigned long long)a0;
- (id)_beginMark;
- (void)markBegin;
- (BOOL)isDiscardable;

@end
