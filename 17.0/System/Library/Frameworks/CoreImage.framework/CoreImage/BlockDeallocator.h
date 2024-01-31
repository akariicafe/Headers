@interface BlockDeallocator : NSObject {
    id /* block */ _block;
}

- (id)initWithBlock:(id /* block */)a0;
- (void)dealloc;

@end
