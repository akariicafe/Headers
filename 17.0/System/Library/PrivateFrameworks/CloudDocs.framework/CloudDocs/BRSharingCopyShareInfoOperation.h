@class NSURL;

@interface BRSharingCopyShareInfoOperation : BROperation {
    NSURL *_fileURL;
}

@property (copy) id /* block */ copyShareInfoCompletionBlock;

- (id)initWithURL:(id)a0;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
