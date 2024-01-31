@class NSArray, UILabel, NSLayoutConstraint, UIView;

@interface HURecordingEventCellFamiliarFacesView : UIView <HFCameraImageObserver>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *pointerView;
@property (retain, nonatomic) NSLayoutConstraint *leftTitleConstraint;
@property (nonatomic) double maxWidthForNames;
@property (readonly, nonatomic) NSArray *imageViews;
@property (retain, nonatomic) NSArray *sortedPeople;

+ (id)placeholderImage;
+ (id)faceCropImageView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateTitleLabel;
- (id)faceCropImageViews;
- (void)manager:(id)a0 didFindFaceCrop:(id)a1 forClip:(id)a2 usingPersonName:(id)a3;
- (void)manager:(id)a0 failedToFindFaceCropForPersonName:(id)a1;
- (void)resizeWithMaxWidth:(double)a0;
- (void)updateWithPersonEvents:(id)a0 forCameraClip:(id)a1;

@end
