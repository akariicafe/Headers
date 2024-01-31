@class UIView, AVPlayerLooper, NSArray, AVPlayerViewController, AVTUILogger, AVTCircularButton, AVTTouchDownGestureRecognizer, AVPlayer;
@protocol AVTPaddleViewDelegate;

@interface AVTPaddleView : UIView

@property (retain, nonatomic) UIView *videoViewContainer;
@property (retain, nonatomic) UIView *addButtonViewContainer;
@property (retain, nonatomic) AVTCircularButton *addButton;
@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVPlayerLooper *looper;
@property (retain, nonatomic) AVPlayerViewController *videoController;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (readonly, nonatomic) long long layoutDirection;
@property (retain, nonatomic) AVTTouchDownGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) AVTTouchDownGestureRecognizer *dismissGestureRecognizer;
@property (retain, nonatomic) AVTUILogger *logger;
@property (copy, nonatomic) id /* block */ preCommitBlock;
@property (nonatomic) BOOL automaticallyStartsPlaying;
@property (nonatomic) double padding;
@property (weak, nonatomic) id<AVTPaddleViewDelegate> delegate;

+ (double)defaultPadding;
+ (id)videoItem;

- (BOOL)isRTL;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)dismissAnimated:(BOOL)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)handleTapGesture;
- (void)showAnimated:(BOOL)a0;
- (void)pauseVideo;
- (void)playVideo;
- (BOOL)isPointInsideTransparentRegion:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForVideoInCoordinateSpace:(id)a0;
- (void)_configureWithSymbolConfiguration:(id)a0;
- (void)attachVideoController:(id)a0 looper:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForAddButtonInCoordinateSpace:(id)a0;
- (void)handleDismissGesture;
- (void)handleTapAddButton;
- (id)initWithLayoutDirection:(long long)a0;
- (id)initWithLayoutDirection:(long long)a0 symbolConfiguration:(id)a1;
- (void)startPlayingIfNecessary;
- (void)stopPlayingIfNecessary;
- (void)updateLayoutFromPlusButtonView:(id)a0 videoView:(id)a1;

@end
