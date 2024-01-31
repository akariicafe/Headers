@class PXImportItemViewModel, PUImportOneUpTransitionView, PXImportMediaProvider;

@interface PUImportOneUpPreviewingViewController : UIViewController

@property (retain, nonatomic) PXImportItemViewModel *importItemViewModel;
@property (retain, nonatomic) PXImportMediaProvider *mediaProvider;
@property (retain, nonatomic) PUImportOneUpTransitionView *previewView;

- (void)viewDidLoad;
- (void)updatePreferredContentSize;
- (void).cxx_destruct;
- (id)initWithImportItemViewModel:(id)a0 startingImage:(id)a1 mediaProvider:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForImportItemViewModel:(id)a0;

@end
