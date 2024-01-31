@class NSString, HKProxyProvider;

@interface HKClinicalDocumentDownloader : NSObject <_HKXPCExportable> {
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)exportedInterface;
- (id)init;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)initWithConnection:(id)a0;
- (void)_fetchProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)beginOrResumeDownloadingAttachments:(id)a0 shouldRequestMore:(BOOL)a1 completion:(id /* block */)a2;
- (void)downloadAttachment:(id)a0 completion:(id /* block */)a1;
- (void)pingDownloaderWithCompletion:(id /* block */)a0;
- (void)triggerDownloadForAttachment:(id)a0 completion:(id /* block */)a1;

@end
