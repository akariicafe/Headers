@class NSLock;

@interface SSVMediaSocialAdminStatusOperation : SSVComplexOperation {
    NSLock *_lock;
    id /* block */ _outputBlock;
}

@property (copy) id /* block */ outputBlock;

- (id)init;
- (void)main;
- (void).cxx_destruct;

@end
