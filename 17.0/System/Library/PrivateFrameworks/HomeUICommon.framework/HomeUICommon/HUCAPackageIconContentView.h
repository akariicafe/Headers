@class CAPackage, CAStateController, NSArray, NSString, CALayer;
@protocol HFIconDescriptor;

@interface HUCAPackageIconContentView : HUIconContentView <CAStateControllerDelegate, HUIconContentIntrinsicContentSizeProtocol>

@property (retain, nonatomic) CAStateController *stateController;
@property (retain, nonatomic) CAPackage *package;
@property (retain, nonatomic) CALayer *rootLayer;
@property (retain, nonatomic) NSArray *packageLayers;
@property (nonatomic) struct CGSize { double width; double height; } assetSize;
@property (nonatomic) struct CGSize { double width; double height; } assetNoMarginSize;
@property (retain, nonatomic) NSString *stateName;
@property (retain, nonatomic) id<HFIconDescriptor> renouncedPackageDescriptor;
@property BOOL useAssetMarginSize;

+ (BOOL)_isAnimationEnabled;

- (void)setState:(id)a0 animated:(BOOL)a1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stateController:(id)a0 transitionDidStart:(id)a1 speed:(float)a2;
- (void)stateController:(id)a0 didSetStateOfLayer:(id)a1;
- (void)setState:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)stateController:(id)a0 transitionDidStop:(id)a1 completed:(BOOL)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateStateAnimated:(BOOL)a0;
- (void)reclaimIconIfPossible;
- (void)renounceIconIfPossible;
- (void)updateWithIconDescriptor:(id)a0 displayStyle:(unsigned long long)a1 animated:(BOOL)a2;
- (void)_applyModifiers;
- (struct CGSize { double x0; double x1; })iconContentIntrinsicContentSize;
- (void)layoutRootLayer;
- (void)_tryRenouncePackageForIconDescriptor:(id)a0;
- (void)_updateWithPackage:(id)a0 animated:(BOOL)a1;

@end
