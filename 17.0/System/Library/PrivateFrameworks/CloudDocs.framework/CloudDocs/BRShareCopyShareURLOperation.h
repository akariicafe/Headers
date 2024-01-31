@class CKShare, NSString, NSError;

@interface BRShareCopyShareURLOperation : BRShareOperation {
    NSString *_appName;
    NSError *_error;
}

@property (retain, nonatomic) CKShare *share;
@property (copy) id /* block */ shareCopyURLCompletionBlock;
@property (copy) id /* block */ copyShareURLCompletionBlock;

- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0 documentType:(id)a1;
- (id)initWithItemID:(id)a0;
- (id)initWithShare:(id)a0 documentType:(id)a1;
- (id)initWithShare:(id)a0 fileURL:(id)a1 documentType:(id)a2;
- (id)initWithShare:(id)a0 itemID:(id)a1;

@end
