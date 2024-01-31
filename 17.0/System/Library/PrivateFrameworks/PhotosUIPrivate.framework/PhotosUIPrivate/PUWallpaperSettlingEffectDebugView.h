@class UILabel, UIButton;
@protocol PISegmentationItem;

@interface PUWallpaperSettlingEffectDebugView : UIView

@property (retain, nonatomic) id<PISegmentationItem> segmentationItem;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIButton *button;
@property (copy, nonatomic) id /* block */ onFileRadar;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithSegmentationItem:(id)a0;
- (void)fileRadarButtonTapped;
- (id)generateText;
- (void)viewTapped;

@end
