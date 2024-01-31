@class DBSExternalDisplayIconView, DBSArrangementLayoutViewController, DBSNativeDisplayIconView, NSLayoutConstraint;

@interface DBSArrangementLayoutView : UIView

@property (weak, nonatomic) DBSArrangementLayoutViewController *dataSource;
@property (nonatomic) struct CGSize { double width; double height; } externalDisplaySize;
@property (nonatomic) struct CGSize { double width; double height; } nativeDisplaySize;
@property (nonatomic) double margin;
@property (retain, nonatomic) DBSExternalDisplayIconView *externalDisplay;
@property (retain, nonatomic) DBSNativeDisplayIconView *northDisplay;
@property (retain, nonatomic) DBSNativeDisplayIconView *eastDisplay;
@property (retain, nonatomic) DBSNativeDisplayIconView *southDisplay;
@property (retain, nonatomic) DBSNativeDisplayIconView *westDisplay;
@property (retain, nonatomic) NSLayoutConstraint *nativeIconAspectRatioConstraint;
@property (retain, nonatomic) NSLayoutConstraint *widthRatioConstraint;

- (void)updateForOrientation:(long long)a0;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_nativeDisplaySizeForOrientation:(long long)a0;
- (id)_placeHolderMainDisplayImageWithWidth:(double)a0 orientation:(long long)a1;
- (double)_pointDistanceFirst:(struct CGPoint { double x0; double x1; })a0 second:(struct CGPoint { double x0; double x1; })a1;
- (void)arrangeDisplayIcons;
- (unsigned long long)displayLocationForPointInView:(struct CGPoint { double x0; double x1; })a0;
- (void)placeCurrentDisplayAtLocation:(unsigned long long)a0;
- (void)updateNativeDisplayImagesWithOrientation:(long long)a0;

@end
