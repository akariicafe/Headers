@class UIImageView, UIImage;
@protocol ICDocCamPageContentViewTapDelegate;

@interface ICDocCamPageContentViewController : UIViewController

@property (weak, nonatomic) UIImageView *imageView;
@property (nonatomic) unsigned long long pageIndex;
@property (retain, nonatomic) UIImage *image;
@property (weak, nonatomic) id<ICDocCamPageContentViewTapDelegate> tapDelegate;

+ (double)leadingTrailingOffset:(long long)a0;

- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void)didReceiveMemoryWarning;
- (void).cxx_destruct;
- (void)handleSingleTap:(id)a0;

@end
