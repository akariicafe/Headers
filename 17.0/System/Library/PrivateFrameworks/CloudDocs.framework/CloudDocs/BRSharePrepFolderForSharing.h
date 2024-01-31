@interface BRSharePrepFolderForSharing : BRShareOperation

@property (copy) id /* block */ prepFolderSharingCompletionBlock;

- (id)initWithURL:(id)a0;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
