@class PXCMMStatusController, UIViewController, PXMomentShareStatusPresentation;

@interface PXCMMGridController : NSObject {
    PXMomentShareStatusPresentation *_statusPresentation;
    PXCMMStatusController *_statusController;
}

@property (readonly, nonatomic) UIViewController *gridViewController;

+ (BOOL)useGridZeroForCMMSession:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCMMSession:(id)a0 enableDismissAction:(BOOL)a1 assetActionManager:(id)a2 assetCollectionActionManager:(id)a3 performerDelegate:(id)a4 photosViewConfigurationBlock:(id /* block */)a5;

@end
