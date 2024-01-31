@class NSLock;

@interface SUUIMediaSocialProfileOperation : SSVComplexOperation {
    NSLock *_lock;
    id /* block */ _outputBlock;
}

@property (copy) id /* block */ outputBlock;

- (id)init;
- (void)main;
- (void).cxx_destruct;
- (id)_profileWithResponseDictionary:(id)a0;
- (id)initWithClientContext:(id)a0;

@end
