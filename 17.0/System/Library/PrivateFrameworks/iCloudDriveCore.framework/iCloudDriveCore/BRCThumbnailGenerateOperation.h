@class NSURL, NSString;

@interface BRCThumbnailGenerateOperation : _BRCOperation <BRCOperationSubclass> {
    NSURL *_url;
}

@property (readonly, nonatomic) NSURL *targetURL;
@property (copy, nonatomic) id /* block */ saveThumbnailCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldRetryForError:(id)a0;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithDocumentAtURL:(id)a0 targetURL:(id)a1;

@end
