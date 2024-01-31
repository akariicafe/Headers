@class NSString, NSArray, UIImage, NSMutableDictionary, SKUIImageDataConsumer, SKUIIPadDownloadsViewController, SKUIIPhoneDownloadsViewController, SSDownloadManager, NSCache;

@interface SKUIDownloadsViewController : SKUIViewController <SSDownloadManagerObserver, SKUIDownloadsChildViewControllerDelegate> {
    SKUIImageDataConsumer *_consumer;
    SSDownloadManager *_downloadManager;
    NSMutableDictionary *_imageOperations;
    NSCache *_images;
    SKUIIPhoneDownloadsViewController *_iphoneViewController;
    SKUIIPadDownloadsViewController *_ipadViewController;
    UIImage *_nullImage;
}

@property (copy) NSArray *downloads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_sizeClassForSize:(struct CGSize { double x0; double x1; })a0;

- (void)dealloc;
- (void)downloadManager:(id)a0 downloadStatesDidChange:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)downloadManagerDownloadsDidChange:(id)a0;
- (void)_reloadView;
- (void)_reloadBadge;
- (void)_reloadManagerFromServer;
- (void)_reloadViewControllerWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setArtwork:(id)a0 forURLString:(id)a1;
- (id)childViewController:(id)a0 artworkForDownload:(id)a1;
- (void)childViewController:(id)a0 performActionForDownload:(id)a1;
- (void)childViewController:(id)a0 removeDownloads:(id)a1;

@end
