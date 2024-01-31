@class NSString, UIImageView, NSValue, NSLayoutConstraint;

@interface BPSIllustratedWatchView : UIView <BPSWatchViewProtocol>

@property (retain, nonatomic) UIImageView *watchScreenImageView;
@property (retain, nonatomic) UIImageView *watchView;
@property (nonatomic) double scaledDownFactor;
@property (nonatomic) double scaledDownXDelta;
@property (nonatomic) double scaledDownYDelta;
@property (nonatomic) unsigned long long screenImageSize;
@property (nonatomic) BOOL usingCompactWatchAsset;
@property (nonatomic) BOOL usingAgaveWatchAsset;
@property (retain, nonatomic) NSLayoutConstraint *centeredSubviewCenterXConstraint;
@property (retain, nonatomic) NSString *screenImageSearchBundleIdentifier;
@property (copy, nonatomic) NSString *screenImageName;
@property (nonatomic) BOOL allowScaling;
@property (copy, nonatomic) NSValue *preferredCGSizeValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })watchScreenInsetGuide;
- (void)_configureWatchImage;
- (BOOL)_shouldUseCompactWatchAsset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_unscaledWatchScreenInsetGuide;
- (void)_updateCenteredSubviewConstraints;
- (void)addSyncTrapProgressView:(id)a0;
- (void)textSizeDidChange:(id)a0;
- (id)watchAssetBundle;

@end
