@class NSArray, NSString, PUPhotoStreamRecipientViewController, UINavigationItem;
@protocol PUCloudSharedCreateAlbumViewControllerDelegate;

@interface PUCloudSharedCreateAlbumViewController : UIViewController {
    UINavigationItem *_navItem;
    PUPhotoStreamRecipientViewController *_composeRecipientController;
}

@property (retain, nonatomic, setter=_setAlbumRecipients:) NSArray *_albumRecipients;
@property (weak, nonatomic) id<PUCloudSharedCreateAlbumViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *nextButtonTitle;
@property (readonly, nonatomic) NSArray *albumRecipients;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (id)init;
- (void)dealloc;
- (void)loadView;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentSizeForViewInPopover;
- (id)navigationItem;
- (void)_cancelAction:(id)a0;
- (void)_doneAction:(id)a0;
- (void)_handleCompletionWithSuccess:(BOOL)a0;
- (void)_saveUserEnterredInfo;
- (BOOL)_validateRecipientsToAdd:(id)a0;

@end
