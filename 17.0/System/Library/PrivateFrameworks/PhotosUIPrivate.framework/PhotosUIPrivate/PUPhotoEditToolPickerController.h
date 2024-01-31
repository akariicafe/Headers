@class PUPhotoEditToolPickerSpec, NSArray, UIView, PUViewControllerSpec;

@interface PUPhotoEditToolPickerController : UIViewController

@property (retain, nonatomic) NSArray *toolButtonConstraints;
@property (retain, nonatomic) UIView *selectionIndicatorView;
@property (retain, nonatomic) NSArray *selectionIndicatorConstraints;
@property (nonatomic) double interToolSpacing;
@property (retain, nonatomic) PUPhotoEditToolPickerSpec *toolPickerSpec;
@property (nonatomic) long long layoutDirection;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSArray *toolButtons;
@property (nonatomic) long long selectedToolTag;
@property (retain, nonatomic) PUViewControllerSpec *parentSpec;

- (void)updateViewConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithLayoutDirection:(long long)a0 style:(long long)a1;

@end
