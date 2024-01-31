@interface _NSUndoObject : NSObject {
    _NSUndoObject *next;
    _NSUndoObject *previous;
    id _target;
}

- (id)init;
- (void)invoke;
- (BOOL)isEndMark;
- (id)target;
- (id)initWithTarget:(id)a0;
- (BOOL)isBeginMark;

@end
