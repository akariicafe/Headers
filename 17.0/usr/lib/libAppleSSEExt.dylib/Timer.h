@interface Timer : NSObject {
    id /* block */ _dispatchBlock;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (void)resetWithTimeInterval:(double)a0 block:(id /* block */)a1;

@end
