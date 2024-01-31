@interface HMFCancellationHandler : HMFObject <HMFCancellable> {
    id /* block */ _block;
}

- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)cancel;

@end
