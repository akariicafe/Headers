@interface Invalidation : NSObject {
    id /* block */ _block;
}

- (id)initWithBlock:(id /* block */)a0;
- (void)invoke;
- (void).cxx_destruct;

@end
