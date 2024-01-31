@class NSURL, NSOperationQueue;

@interface FPListRemoteVersionsOperation : FPOperation {
    NSURL *_documentURL;
    NSOperationQueue *_queue;
}

@property (nonatomic) BOOL includeCachedVersions;

- (void)main;
- (void).cxx_destruct;
- (id)fp_prettyDescription;
- (id)initWithDocumentURL:(id)a0;
- (BOOL)isSandboxExtensionConsumed;
- (void)presendNotifications;

@end
