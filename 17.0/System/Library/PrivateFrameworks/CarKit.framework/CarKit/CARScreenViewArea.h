@protocol CARDisplayInfoProviding;

@interface CARScreenViewArea : NSObject

@property (nonatomic) BOOL displaysTransitionControl;
@property (nonatomic) unsigned long long statusBarEdge;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } unadjustedSafeFrame;
@property (nonatomic) BOOL supportsFocusTransfer;
@property (nonatomic) BOOL supportsUIOutsideSafeArea;
@property (nonatomic) BOOL shouldApplyDisplayInsets;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } additionalInsets;
@property (weak, nonatomic) id<CARDisplayInfoProviding> displayInfoProvider;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } safeFrame;

+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })insetsForOEMUIWithDisplaySize:(struct CGSize { double x0; double x1; })a0 originInDisplay:(struct CGPoint { double x0; double x1; })a1 safeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 viewAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })insetsForOEMUIWithDisplaySize:(struct CGSize { double x0; double x1; })a0 safeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 viewAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_updateEffectiveSafeFrame;
- (id)initWithPropertySupplier:(id /* block */)a0 additionalInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1 displayInfoProvider:(id)a2;
- (id)initWithPropertySupplier:(id /* block */)a0 additionalInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1 viewAreaDictionary:(id)a2 wantsCornerMasks:(BOOL)a3 displayInfoProvider:(id)a4;
- (id)initWithPropertySupplier:(id /* block */)a0 displayInfoProvider:(id)a1;
- (BOOL)isEqualToViewArea:(id)a0;

@end
