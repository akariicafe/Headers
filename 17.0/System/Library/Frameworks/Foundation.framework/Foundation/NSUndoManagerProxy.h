@class NSUndoManager;

@interface NSUndoManagerProxy : NSProxy {
    NSUndoManager *_manager;
    Class _targetClass;
}

- (id)retain;
- (void)forwardInvocation:(id)a0;
- (BOOL)_tryRetain;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithManager:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (oneway void)release;
- (void)setTargetClass:(Class)a0;
- (void)superRelease;

@end
