@class NSString, NSURL, EKICSPreviewController, UIBarButtonItem;

@interface _SFICSPreviewViewController : UINavigationController <EKICSPreviewControllerDelegate> {
    NSString *_filePath;
    NSURL *_sourceURL;
    UIBarButtonItem *_activityBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    EKICSPreviewController *_icsController;
}

@property (copy, nonatomic) id /* block */ beforeDismissHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)popViewControllerAnimated:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)viewDidLoad;
- (void)icsPreviewControllerWantsDismissal:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_done:(id)a0;
- (void)_presentActivityViewController:(id)a0;
- (void)_ensureLeftBarButtonItemsIncludesActivityItem:(id)a0;
- (void)_ensureLeftBarButtonItemsIncludesDoneItem:(id)a0;
- (void)_updateNavigationBarItems;
- (id)initWithFilePath:(id)a0 sourceURL:(id)a1;

@end
