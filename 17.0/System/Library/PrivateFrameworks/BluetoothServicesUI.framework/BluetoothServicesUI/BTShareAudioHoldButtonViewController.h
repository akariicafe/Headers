@class UIImageView, BTMediaPlayerView, UIView, UILabel, UIButton;

@interface BTShareAudioHoldButtonViewController : BTShareAudioBaseViewController

@property (retain, nonatomic) UIImageView *productImageView;
@property (retain, nonatomic) BTMediaPlayerView *productMovieView;
@property (retain, nonatomic) UIView *productMovieContainerView;
@property (retain, nonatomic) UIImageView *shareImageView;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (nonatomic) unsigned int colorCode;
@property (nonatomic) unsigned int productID;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_updateDeviceVisual:(id)a0;
- (void)eventCancel:(id)a0;
- (id)_holdImageForPID:(unsigned int)a0 colorCode:(unsigned int)a1;

@end
