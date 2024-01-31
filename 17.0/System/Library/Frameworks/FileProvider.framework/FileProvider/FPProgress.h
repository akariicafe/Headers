@class NSOperation;

@interface FPProgress : NSProgress {
    NSOperation *_operation;
}

- (id)initWithOperation:(id)a0;
- (void).cxx_destruct;
- (void)cancel;

@end
