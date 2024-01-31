@interface TPSAsyncBlockOperation : TPSAsyncOperation {
    void /* unknown type, empty encoding */ asyncBlock;
}

@property (nonatomic, copy) id /* block */ asyncBlock;

- (id)init;
- (void)main;
- (void).cxx_destruct;
- (id)initWithAsyncBlock:(id /* block */)a0;

@end
