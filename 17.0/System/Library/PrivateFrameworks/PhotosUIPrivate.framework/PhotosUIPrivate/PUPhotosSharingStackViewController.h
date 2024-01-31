@class PHFetchResult, NSString, PXMessagesStackView, PHAsset;

@interface PUPhotosSharingStackViewController : UIViewController <PXMessagesStackViewDelegate> {
    PXMessagesStackView *_cardsView;
}

@property (readonly, nonatomic) PHFetchResult *assetFetchResult;
@property (readonly, nonatomic) PHAsset *currentAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)stackView:(id)a0 didSelectAssetReference:(id)a1;
- (id)initWithAssetFetchResult:(id)a0;

@end
