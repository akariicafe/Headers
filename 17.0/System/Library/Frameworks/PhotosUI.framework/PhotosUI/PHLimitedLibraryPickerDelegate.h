@class PLAssetsdClient, NSString;

@interface PHLimitedLibraryPickerDelegate : NSObject <UINavigationControllerDelegate, UIAdaptivePresentationControllerDelegate, PHPickerViewControllerDelegate>

@property (copy, nonatomic) id /* block */ dismissalBlock;
@property (copy, nonatomic) id /* block */ finishedPickingBlock;
@property (retain, nonatomic) PLAssetsdClient *assetsdClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (void)picker:(id)a0 didFinishPicking:(id)a1;

@end
