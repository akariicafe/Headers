@interface TMLObjectFinalizer : NSObject {
    id /* block */ _block;
}

+ (void)runBlock:(id /* block */)a0 onFinalize:(id)a1;

- (id)initWithBlock:(id /* block */)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
