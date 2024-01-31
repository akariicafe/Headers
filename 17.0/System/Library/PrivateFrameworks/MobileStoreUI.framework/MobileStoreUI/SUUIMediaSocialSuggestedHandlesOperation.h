@class NSArray, NSLock, SUUIClientContext;

@interface SUUIMediaSocialSuggestedHandlesOperation : SSVComplexOperation {
    SUUIClientContext *_clientContext;
    NSLock *_lock;
    id /* block */ _outputBlock;
    NSArray *_words;
}

@property (copy) id /* block */ outputBlock;
@property (copy) NSArray *words;

- (void)main;
- (void).cxx_destruct;
- (id)initWithClientContext:(id)a0;

@end
