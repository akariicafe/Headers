@class NSURL;

@interface BRShareAcceptOperation : BROperation {
    NSURL *_shareLink;
}

@property (copy) id /* block */ shareAcceptCompletionBlock;

- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithShareLink:(id)a0;

@end
