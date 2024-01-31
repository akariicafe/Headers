@class UIButton, NSString;
@protocol PULivePhotoKeyFrameSelectionViewControllerDelegate;

@interface PULivePhotoKeyFrameSelectionViewController : UIViewController

@property (retain, nonatomic) UIButton *makeKeyPhotoBtn;
@property (weak, nonatomic) id<PULivePhotoKeyFrameSelectionViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *selectionTitle;

- (void)viewDidLoad;
- (long long)preferredUserInterfaceStyle;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)_updateButtonTitle;
- (void)tapMakeKeyPhoto:(id)a0;

@end
