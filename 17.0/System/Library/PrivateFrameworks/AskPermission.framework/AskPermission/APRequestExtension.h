@class NSString, NSExtensionContext;

@interface APRequestExtension : NSObject <NSExtensionRequestHandling>

@property (retain, nonatomic) NSExtensionContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_finish;
- (void).cxx_destruct;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)checkDownloadQueue;
- (void)requestUpdatedWithResult:(id)a0 completion:(id /* block */)a1;

@end
