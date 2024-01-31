@class NSString, NSArray;

@interface SAStackIterator : NSObject <SAFrameIterator> {
    NSArray *_stack;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasStack;
- (BOOL)hasUserStack;
- (void).cxx_destruct;
- (BOOL)hasSwiftAsyncStack;
- (BOOL)hasKernelStack;
- (void)iterateFramesWithBacktraceStyle:(unsigned long long)a0 block:(id /* block */)a1;

@end
