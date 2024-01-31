@class NSMutableArray;

@interface IMAllocTracking : NSObject {
    NSMutableArray *_callStacks;
}

- (id)retain;
- (void)dealloc;
- (oneway void)release;
- (void)_registerCallstack;

@end
