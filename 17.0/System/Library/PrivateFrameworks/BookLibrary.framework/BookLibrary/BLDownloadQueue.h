@interface BLDownloadQueue : BLDownloadQueueNonUI

+ (id)sharedInstance;

- (void)addDownloadsWithManifestRequest:(id)a0 uiManager:(id)a1 completion:(id /* block */)a2;
- (void)purchaseWithRequest:(id)a0 uiManager:(id)a1 completion:(id /* block */)a2;
- (void)purchaseWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)setAutomaticDownloadEnabled:(BOOL)a0 uiManager:(id)a1 withCompletion:(id /* block */)a2;

@end
