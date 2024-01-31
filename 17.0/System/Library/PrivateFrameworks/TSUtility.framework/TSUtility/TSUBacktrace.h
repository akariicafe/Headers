@interface TSUBacktrace : NSObject {
    void **_callstack;
    int _frames;
    int _initAdjustment;
}

+ (id)new;
+ (id)caller;
+ (id)backtrace;
+ (id)callee;

- (id)init;
- (void)dealloc;
- (id)caller;
- (BOOL)isEqual:(id)a0;
- (id)callee;
- (id)backtraceString;
- (id)initWithAdjustment:(int)a0;
- (id)callerAtIndex:(long long)a0;

@end
