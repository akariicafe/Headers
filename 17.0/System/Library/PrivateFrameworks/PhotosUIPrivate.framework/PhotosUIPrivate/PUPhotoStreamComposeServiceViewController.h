@class NSString, NSArray, NSObject;
@protocol PLAlbumProtocol, PLAlbumContainer;

@interface PUPhotoStreamComposeServiceViewController : PXPhotoStreamComposeServiceViewController <PUPhotoStreamsAlbumsTableViewControllerDelegate, PUPhotoStreamCreateTitleDelegate, PUCloudSharedCreateAlbumViewControllerDelegate, SLSheetViewHostProtocol> {
    struct { unsigned char hasDidPost : 1; unsigned char hasDidCancel : 1; } _delegateFlags;
    NSObject<PLAlbumProtocol> *_selectedAlbum;
    NSArray *_actions;
    NSObject<PLAlbumContainer> *_albumList;
    BOOL _inCreateNewAlbum;
    NSArray *_recipients;
    BOOL _shouldShowPost;
    NSString *_itemCountString;
}

@property (readonly, copy, nonatomic) NSString *startingContentText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)send;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)title;
- (void)setDelegate:(id)a0;
- (void)failWithError:(id)a0;
- (void)setAssetsToShare:(id)a0;
- (void)setSourcesToShare:(id)a0;
- (id)albumListAction;
- (id)_imageFromStreamShareSource:(id)a0;
- (void)_pushTitleController;
- (void)albumStreamingCreateViewController:(id)a0 didSucceed:(BOOL)a1;
- (void)controller:(id)a0 didSelectAlbum:(id)a1;
- (void)controllerWillCreateNewAlbum:(id)a0;
- (id)initWithStartingContentText:(id)a0;
- (BOOL)isContentValid;
- (id)serviceIconImage;
- (id)sheetActions;
- (void)shouldShowNetworkActivityIndicator:(id)a0;
- (void)titleController:(id)a0 didSetTitle:(id)a1;
- (void)titleControllerDidCancel:(id)a0;
- (void)userDidCancel;
- (void)userDidPost;

@end
